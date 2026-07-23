# Learning and stuff - Cau kien dien tu


### Chương 1
### Nguyên lý xếp chồng
- Áp dụng cho các mạch chứa các phần tử tuyến tính như trở, tụ, cuộn cảm
- **Nội dung: OUTPUT của mạch bằng tổng output do từng nguồn đơn lẻ gây ra khi hoạt động riêng lẻ (bất kể là dòng hay áp)**
- Quy tắc thực hiện: khi xét một nguồn tác động thì các nguồn còn lại sẽ bị triệt tiêu
    - Nguồn áp: Ngắn mạch (thay bằng dây dẫn)
    - Nguồn dòng: Hở mạch (ngắt bỏ nhánh đó)
- Kết quả e= $e_v+e_i$ 



### Biến đổi tương đương thevenin
- Giúp đơn giản hoá mạch phức tạp thành mạch tương đương gồm 2 phần tử nối tiếp
    - Gồm một nguồn Vth nối tiếp trở Rth
    - Các thông số 
        - Vth: Điện áp hở mạch tại đầu cần biến đổi 
        - In: dòng ngắn mạch tại 2 đầu đó
        - Rth: Tình bằng cthuc $$Rth = Vth/I_n$$


// add more to make it more detail

### Phương pháp phân tích mạch phi tuyến 
- Phương pháp giải hệ ptrinh bằng cách áp dụng 2 định luật Kirchoff cho dòng và áp cho các phần tử để thiết lập hệ phương trình ( thường là 2 ptrinh 2 ẩn $i_D$ và $v_D$ ) 

- Phương pháp tín hiệu nhỏ 
    - Sử dụng khi tín hiệu xoay chiều có biên độ nhỏ thay đổi xung quanh điểm làm việc một chiều
    - Quy trình 4 bước:
        - Xác định chế đố làm việc 1 chiều của mạch
        - Xác định mô hình tương đương tín hiệu nhỏ của phần tử phi tuyến tại điểm đó (Thay linh kiện phi tuyến bằng một điện trở tương đương tuyến tính)
        - Vẽ sơ đồ tương đương tín hiệu nhỏ cho toàn mạch và tính toán các thông số ($i_d, v_d$)



### Chương 2
- Note: Tóm tắt phần quan trọng của phần này chứ thấy đéo dùng mấy
- Vật liệu bán dẫn:
    - Định luật td khối: $ n.p=n_i^2 $
- Tiếp giáp P-N: 
    - Trạng thái cân bằng: không có dòng điện chạy qua
    - Phân cực thuận(V>0): Dòng điện tăng, chạy qua theo hàm mũ
    - Phân cực ngược(V<0): Dòng điện rò rất nhỏ, linh kiện coi như khoá


### Chương 3: các linh kiện cơ bản
#### Trở
- Ngăn cản dòng trong mạch
- Công thức liên quan
    - ĐL ohm: $U=I.R$
    - Công suất tiêu tán $$P=U\cdot I = I^2\cdot R =  \frac{U^2}{R} $$
    - Công thức cấu tạo (dùng khi thiết kế/ chế tạo): $$R = \rho \frac{l}{S} $$

- Một số khái niệm liên quan
    - Công suất danh định: là công suất tối đa điện trở chịu dc trong tgian dài
    - Điện trở cao tần (bt thêm ko bt có dùng k)
        - Ở tần số cao điện trở không thuần trở mà xuất hiện điện cảm L và điện dung C kí sinh
        - Mô hình tương đương gồm R nối tiếp L tất cả song song C
- Kí hiệu
![alt text](image-1.png)

- Cách đọc giá trị của trở 
![alt text](image.png)
![alt text](image-2.png)

#### Tụ điện
- Tích luỹ và lưu trữ điện tích
- Công thức tính điện: $Q=C \cdot U$

- Một số khái niệm liên quan
    - Điện áp làm việc: Mức điện áp DC tối đa tụ chịu được
    - Dòng điện rò: luôn có dòng điện dò chạy qua tụ bởi sự ko lý tưởng cảu chất cách điện
 
 - Cách đọc giá trị và kí hiệu
    - Ghi trực tiếp
    - Ghi theo quy ước số (số nguyên đvi pF, số thập phân đvi uF)
        - VD 47/630: C=47pF, $U_1c$=630Vdc
        - VD2 0.01/100: C=0.01uF, $U_1c$=100Vdc
    - Ghi theo mã XYZ=XY*$10^Z$ pF
    ![alt text](image-3.png)
        - VD 123K/50V = 12000pF + 10%, $U_1c$ = 50 Vdc
    - Quy ước màu: Tương tự điện trở, vòng màu thứ 3 là số số không thêm vào, đơn vị tính là pF



#### Phân loại và Ứng dụng phổ biến
- Tụ giấy, Tụ gốm (Ceramic): Rẻ, kích thước nhỏ, dùng để lọc nhiễu cao tần
- Tụ Mica: Độ ổn định cao, chịu nhiệt tốt, dùng trong mạch chính xác
- Tụ hóa (Aluminum/Tantalum): Điện dung rất lớn, dùng để lọc nguồn hoặc lưu trữ năng lượng

Ứng dụng thực tế:
- Tụ liên lạc: Cho tín hiệu AC đi qua, chặn dòng DC giữa các tầng mạch

- Tụ lọc: San phẳng điện áp sau khi chỉnh lưu

- Tụ thoát: Triệt tiêu các tín hiệu nhiễu không cần thiết xuống đất
- Mạch định thời: Kết hợp với điện trở để tạo hằng số thời gian (nạp/phóng điện)

    
#### Cuộn cảm: 
- Sinh ra ht tự cảm khi có dòng điện chạy qua 
- Note: Một chút giải thích về tác động của nó lên mạch
    ![alt text](image-4.png)
    - Có thể thấy cuộn cảm thay vì để tín hiệu lên đột ngột thì sẽ cho tín hiệu lên 5v và xuống 0v từ từ 



#### Biến áp


### Chương 4: Diot

- Phương trình shockley: $ I=I_s\cdot(e^\frac{V}{n\cdot V_t}-1)  $
    - I: dòng qua diot
    - $I_s$ dòng điện bão hoá ngược
    - V: điện áp rơi trên diot, ở trg hợp này tg đương điện áp ngưỡng
        - diot Si: 0,5V : 0,8V
        - diot Ge: 0,2V : 0,4V
    - n: hệ số phát xạ (=1 với Ge, =2 với Si)
    - $V_t$: điện áp nhiệt ($V_t=\frac{kT}{q}$)


- Một số ứng dụng của Diot
    - Diot chỉnh lưu: Biến đổi AC thành DC qua các mạch 



