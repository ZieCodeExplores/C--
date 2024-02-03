

/*
Bài 1. Phần nguyên, phần dư
Tính và in ra phần nguyên, phần dư của phép chia 2 số nguyên a, b.
Input
2 số nguyên a, b với b khác 0( -1018 ≤a, b ≤1018)
Output
4
Đáp án của bài toán được in trên 1 dòng
Ví dụ
Input Output
100 5 20 0
14 6 2 2

*/



// cach 1
/*#include<iostream>
using namespace std;
void setup(int a, int b, int& nguyen, int& du) {
	nguyen = a / b;
	du = a % b;
	cout << "so nguyen cua a va b la: " << nguyen << endl;
	cout << " so du cua a va b la: " << du;
}
int main() {
	int a, b;
	cout << "nhap a: ";
	cin >> a;
	cout << " nhap b: ";
	cin >> b;
	int nguyen, du;
	setup(a, b, nguyen, du);
	return 0;
}
*/




// cach 2
/*
#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	int nguyen = a / b;
	int du = a % b;
	cout << "so nguyen cua a va b la:" << nguyen << endl;
	cout << " so du cua a va b la: " << du << endl;
	return 0;
}*/




/*Bài 2. Tính toán giá trị biểu thức
Cho biểu thức A(x) = x3 + 3x2 + x + 1
Với giá trị của x được nhập từ bàn phím, tính và in ra giá trị của biểu thức trên
Input
Số nguyên dương x không quá 105
.
Output
Kết quả của biểu thức A(x)
Ví dụ
Input Output
2 23*/



//cach1


/*#include<iostream>
using namespace std;
void setup(int x, int& A) {
	A = pow(x, 3) + 3 * pow(x, 2) + x + 1;
	cout << A;
}
int main() {
	int x;
	cout << " nhap x";
	cin >> x;
	int A;
	setup(x, A);
	return 0;
}
*/




// cach 2



/*
#include<iostream>
using namespace std;

int main() {
	int x;
	cout << " nhap x: ";
	cin >> x;
	int A = pow(x, 3) + 3 * pow(x, 2) + x + 1;
	cout << A;
	return 0;
}*/



/*
Bài 3. Tính toán giá trị biểu thức 2
Yêu cầu: Cho ba số nguyên dương a , b và c, hãy tính S = a*(b+c)+b*(a+c).
Dữ liệu: Một dòng ba số nguyên a, b, c ( 0 < |a|, |b|, |c |< 109
), a và b cách nhau một
khoảng trắng.
Kết quả: Một dòng ghi giá trị S = a*(b+c) + b*(a+c).
Ví dụ
Input Output
1 2 3 13
*/


// cach1
/*#include<iostream>
using namespace std;
void setup(int a, int b, int c, int& S) {
	S = a * (b + c) + b * (a + c);
	cout << "gia tri cua S la: " << S;
}
int main() {
	int a, b, c;
	cout << " nhap so nguyen duong a: ";
	cin >> a;
	cout << " nhap so nguyen duong b: ";
	cin >> b;
	cout << " nhap so nguyen duong c: ";
	cin >> c;
	int S;
	setup(a, b, c, S);
	return 0;
}*/


//cach 2

/*
#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << " nhap so nguyen duong a: ";
	cin >> a;
	cout << " nhap so nguyen duong b: ";
	cin >> b;
	cout << " nhap so nguyen duong c: ";
	cin >> c;
	int S = a * (b + c) + b * (a + c);
	cout << "gia tri cua S la: " << S;
	return 0;
}
*/










/*
Bài 4. Tính tổng, hiệu, tích, thương
Nhập vào 2 số nguyên, in ra tổng, hiệu, tích, thương ( lấy độ chính xác với 2 chữ
số).
Input
2 số nguyên a, b với b khác 0( -109 ≤a, b ≤109
)
Output
Tổng, hiệu, tích, thương của 2 số
Ví dụ
Input Output
10 2 12 8 20 5.00
1000000 1000000 2000000 0 1000000000000 1.00
*/




// cach 1

/*
#include<iostream>
#include<iomanip> // thu vien lấy độ chính xác
using namespace std;
void setup(int a, int b, int& tong, int& hieu, int& tich, float& thuong ) {
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = static_cast<float> (a) / b;
	cout << " tong cua 2 so la: " << tong << endl;
	cout << " hieu cua 2 so la: " << hieu << endl;
	cout << "tich cua 2 so la: " << tich << endl;
	cout << fixed << setprecision(2) << "thuong cua 2 so la: " << thuong;
	//setprecision(2) la lay chinh xac 2 so . neu setprecision(3) thi lay 3chu so
}
int main() {
	int a, b;
	cout << " nhap so nguyen a";
	cin >> a;
	cout << "nhap so nguyen b: ";
	cin >> b;
	int tong, hieu, tich;
	float thuong;
	setup(a, b, tong, hieu, tich, thuong);
	return 0;
}*/


//cach 2



/*
#include<iostream>
#include<iomanip> // thu vien lấy độ chính xác
using namespace std;

int main() {
	int a, b;
	cout << " nhap so nguyen a: ";
	cin >> a;
	cout << "nhap so nguyen b: ";
	cin >> b;
	int tong, hieu, tich;
	float thuong;
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = static_cast<float> (a) / b;
	cout << " tong cua 2 so la: " << tong << endl;
	cout << " hieu cua 2 so la: " << hieu << endl;
	cout << "tich cua 2 so la: " << tich << endl;
	cout << fixed << setprecision(3) << "thuong cua 2 so la: " << thuong;
	return 0;
}
// neu muon lay do chnh xac la 3 thi chi can sua setprecision(3)*/







/*Bài 5. Tính chu vi, diện tích hình tròn
Input
Bán kính r của hình tròn là một số nguyên. (1≤r≤106
)
Output
Chu vi và diện tích của hình tròn lấy độ chính xác với 2 chữ số
Ví dụ
Input Output
10 62.80 314.00
*/



//cach1
/*#include<iostream>
#include<iomanip>
using namespace std;
void setup(int n, double& c, double& s) {
	double pi = 3.14;
	c = 2 * pi* n;
	s = pi * pow(n, 2);
	cout << fixed << setprecision(2) << c << endl;
	cout << fixed << setprecision(2) << s;
}
int main() {
	int n;
	cout << "nhap ban kinh: ";
	cin >> n;
	double chuvi, dientich;
	setup(n, chuvi, dientich);
	return 0;
}*/

//cach2

/*#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int n;
	cout << "nhap ban kinh: ";
	cin >> n;
	double pi = 3.14;
	double chuvi, dientich;
	chuvi = 2 * pi * n;
	dientich = pi * pow(n, 2);

	cout << fixed << setprecision(2) << chuvi << endl;
	cout << fixed << setprecision(2) << dientich;
	return 0;
}*/






/*Bài 6. Tính khoảng cách
Tính khoảng cách Euclid giữa 2 điểm trong hệ tọa độ Oxy
Input
Tọa độ của 2 điểm(x1, y1) và(x2, y2) là các số nguyên.(-106 ≤xi, yi ≤106
	)
	Output
	Khoảng cách giữa 2 điểm lấy độ chính xác với 2 chữ số
	6
	Ví dụ
	Input Output
	1 4 4 8 5.00

*/

//cong thuc tinh khoang cach euclid la sqrt(pow(x2-x1, 2) + pow(y2- y1, 2);



/*#include<iostream>
#include<iomanip>
using namespace std;
void setup(int x1, int y1, int x2, int y2, double& khoangcach) {
	khoangcach = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	cout << fixed << setprecision(2) << "khoang cach euclid giua 2 diem oxy la: " << khoangcach;
}
int main() {
	int x1, y1, x2, y2;
	cout << "nhap x1: ";
	cin >> x1;
	cout << "nhap y1: ";
	cin >> y1;
	cout << "nhap x2: ";
	cin >> x2;
	cout << "nhap y2: ";
	cin >> y2;
	double khoangcach;
	setup(x1, y1, x2, y2, khoangcach);
	return 0;
}*/


//cach2


/*#include<iostream>
#include<iomanip>
using namespace std;

	
int main() {
	int x1, y1, x2, y2;
	cout << "nhap x1: ";
	cin >> x1;
	cout << "nhap y1: ";
	cin >> y1;
	cout << "nhap x2: ";
	cin >> x2;
	cout << "nhap y2: ";
	cin >> y2;
	double khoangcach;
	khoangcach = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	cout << fixed << setprecision(2) << "khoang cach euclid giua 2 diem oxy la: " << khoangcach;

	return 0;
}*/




/*Bài 7. Chuyển đơn vị đo C và F
Công thức chuyển đơn vị đo nhiệt độ từ C sang F như sau:
F = (C * 9 / 5) + 32
Viết chương trình C cho phép nhập vào nhiệt độ đo theo độ C là số nguyên dương 
không quá 106
, thực hiện chuyển
sang đơn vị đo độ F và in ra
màn hình. (Lưu ý luôn lấy 2 chữ số thập phân sau dấu chấm phẩy)
Input Output
24 75.20*/

/*#include<iostream>
#include<iomanip>
using namespace std;
void setup(int C, double& F) {
	F = (C * 9.0 / 5.0) + 32; // dieu nay giup cho phep chia ra so thuc, ma khong phai la so nguyen
}
int main() {
	int C;
	cout << "nhap nhiet do C: ";
	cin >> C;
	double F;
	setup(C, F);
	cout << fixed << setprecision(2) << F << endl;
	return 0;
}*/

//cach2

/*
#include<iostream>
#include<iomanip>
using namespace std;
void setup(int C, double& F) {
	 // dieu nay giup cho phep chia ra so thuc, ma khong phai la so nguyen
}
int main() {
	int C;
	cout << "nhap nhiet do C: ";
	cin >> C;
	double F;
	F = (C * 9.0 / 5.0) + 32;
	cout << fixed << setprecision(2) << F << endl;
	return 0;
}*/



/*Bài 8. Tính tổng 1
Sn = 1 + 2 + 3 + 4 + … + n
Input
Số nguyên không âm n. ( 0 ≤ n ≤ 10
8
).
Output
Kết quả của bài toán
Ví dụ
Input Output
1000000000 5000000050000000
*/



//Sn = 1 + 2 + 3 + 4 + … + n
//=(n/2)*(1+n)

//cach1

/*
#include<iostream>
using namespace std;
void setup(long long n, long long& Sn) {
	Sn = (n / 2) * (1 + n);
	cout << "tong cua Sn la: " << Sn << endl;
}
int main() {
	long long n;
	cout << "nhap so nguyen n: ";
	cin >> n;
	long long Sn;
	setup(n, Sn);

	return 0;
}*/

/*#include<iostream>
using namespace std;

int main() {
	long long n;
	cout << "nhap so nguyen n: ";
	cin >> n;
	long long Sn;
	Sn = (n / 2) * (1 + n);
	cout << "tong cua Sn la: " << Sn << endl;

	return 0;
}*/









/*
Bài 9. Tính tổng 2
Sn = 12 + 22 + 32 + 42 + 52 + … + n2
Input
Số nguyên không âm n. ( 0 ≤ n ≤ 105
).
7
Output
Kết quả của bài toán
Ví dụ
Input Output
100000 333338333350000
*/

//Sn = 1^2 + 2^2 + 3^2 + ... + n ^2
// Sn = (n * ( n +1 ) * ( 2 * n + 1))/6



/*#include<iostream>
using namespace std;
void setup(long long n, long long& Sn) {
	Sn = (n * (n + 1) * (2 * n + 1)) / 6;
	cout << "tong cua Sn: " << Sn;
}
int main() {
	long long n; // vi int co kich thuoc 4 byte = 32 bit, long long co kich thuoc 8 byte = 64 bit
	cout << "nhap n: ";
	cin >> n;
	long long Sn;
	setup(n, Sn);
	return 0;
}
*/

//cach 2
/*
#include<iostream>
using namespace std;

int main() {
	long long n; // vi int co kich thuoc 4 byte = 32 bit, long long co kich thuoc 8 byte = 64 bit
	cout << "nhap so nguyen duong n: ";
	cin >> n;
	long long Sn;
	Sn = (n * (n + 1) * (2 * n + 1)) / 6;
	cout << "tong cua Sn: " << Sn;
	return 0;
}
*/





/*
Bài 10. Tính tổng 3
Sn = 1
1∗2
 + 1
2∗3
 + 1
3∗4
 + ….. + 1
𝑛∗(𝑛+1)

Input
Số nguyên dương n. ( 1 ≤ n ≤ 109
).
Output
Kết quả của bài toán lấy độ chính xác 2 chữ số
Ví dụ
Input Output
99 0.99
*/


//Sn = 1/ 1*2 + 1/ 2*3 + 1/3*4 + ... + 1/n*(n+1)
// Sn = 1/n*(n+1)



/*
#include<iostream>
#include<iomanip> // thu vien  lấy độ chính xác 2 chữ số
using namespace std;
void setup(int n, double& Sn) { // double co kich thuoc 8 byte = 64 bit va float  co kich thuoc 4 byte = 32 bit
	double sum = 0.0; // lay do chinh xac cua dau thap phan trong ket qua
	for (int i = 1; i <= n; i++) {
		Sn = 1.0 / (i * (i + 1));
		sum += Sn;
	}
	Sn = sum;
	cout << fixed << setprecision(2) << "tong cua Sn" << Sn;
}
int main() {
	int n;
	cout << "nhap n: ";
	cin >> n;
	double Sn;
	setup(n, Sn);
	return 0;
}

*/



//cach 2

/*
#include<iostream>
#include<iomanip> // thu vien  lấy độ chính xác 2 chữ số
using namespace std;

int main() {
	int n;
	cout << "nhap n: ";
	cin >> n;
	double Sn;
	double sum = 0.0; // lay do chinh xac cua dau thap phan trong ket qua
	for (int i = 1; i <= n; i++) {
		Sn = 1.0 / (i * (i + 1));
		sum += Sn;
	}
	Sn = sum;
	cout << fixed << setprecision(2) << "tong cua Sn: " << Sn;
	return 0;
}
*/







/*
Bài 11. Tính tổng 4
Sn = 2 + 4 + 6 + 8 + … + 2*n
Input
Số nguyên dương n. ( 1 ≤ n ≤ 109
).
Output
Kết quả của bài toán
Input Output
1000000 1000001000000
3 12
*/


// Sn = 2 + 4 + 6 + 8 + … + 2*n
// Sn = 2* 1 + 2 *2 + 3* 2 + ... + 2* n
// => Sn = 2*n


/*
#include<iostream>
using namespace std;
void setup(long long n, long long& Sn) {
	long long  sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += 2 * i;
		Sn += sum;
	}
	Sn = sum;
	cout << "Tong cua Sn: " << Sn;
}
int main() {
	long long n;
	cout << "nhap n: ";
	cin >> n;
	long long Sn;
	setup(n, Sn);
	return 0;
}
*/

// cach 2


/*
#include<iostream>
using namespace std;

int main() {
	long long n;
	cout << "nhap so nguyen duong n: ";
	cin >> n;
	long long Sn = 0;
	long long  sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += 2 * i;
		Sn += sum;
	}
	Sn = sum;
	cout << "Tong cua Sn: " << Sn << endl;
	return 0;
}
*/








/*
Bài 12. Tính tổng 5
Sn = -1 + 2 - 3 + 4 - 5 + 6 + …. + (-1)nn
Input
Số nguyên dương n. ( 1 ≤ n ≤ 1016).
Output
Kết quả của bài toán
Ví dụ
Input Output
10000000000000000 5000000000000000
*/


/*
#include<iostream>
using namespace std;
void setup(int n, long long& Sn) {
	long long sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
		else {
			sum -= i;
		}

	}
	Sn = sum;
	cout << Sn;
}
int main() {
	int n;
	cout << "nhap n: ";
	cin >> n;
	long long Sn;
	setup(n, Sn);
	return 0;
}
*/

//cach2:


/*
#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "nhap so n: ";
	cin >> n;
	long long Sn;
	long long sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
		else {
			sum -= i;
		}

	}
	Sn = sum;
	cout << Sn;
	return 0;
}
*/








/*
Bài 13. Số chia hết lớn nhất
Cho 2 số nguyên dương a và b. Tìm số chia hết cho b lớn nhất và không vượt qua a.
Chú ý không dùng vòng lặp và các hàm có sẵn.
Input
2 số nguyên dương a, b ( 1 ≤ b ≤ a ≤108
)
Output
Kết quả của bài toán
Ví dụ
Input Output
19 5 15
20 5 20
*/




//sum = (a/b) * b;


/*
#include<iostream>
using namespace std;
void setup(int a, int b) {
	int sum = (a / b) * b;
	cout << "ket qua bai toan: " << sum;
}
int main() {
	int a;
	cout << "nhap a: ";
	cin >> a;
	int b;
	cout << "nhap b: ";
	cin >> b;
	int sum;
	setup(a, b);
	return 0;
}
*/





/*
#include<iostream>
using namespace std;

int main() {
	int a;
	cout << "nhap so a: ";
	cin >> a;
	int b;
	cout << "nhap b: ";
	cin >> b;
	int sum = (a / b) * b;
	cout << "ket qua bai toan: " << sum;
	return 0;
}

*/










/*
Bài 14. Số chia hết nhỏ nhất
Cho 2 số nguyên dương a và b. Tìm số chia hết cho b nhỏ nhất và lớn hơn hoặc
bằng a. Chú ý không dùng vòng lặp và các hàm có sẵn.
Input
2 số nguyên dương a, b ( 1 ≤ b ≤ a ≤108
)
Output
9
Kết quả của bài toán
Ví dụ
Input Output
19 5 20
20 5 20
21 5 25
*/


//Sn = ((a/b)+1) *b;


/*
#include<iostream>
using namespace std;
void setup(int a, int b, int& sum) {
	sum = ((a / b) + 1) * b;
	cout << sum;
}
int main() {
	int a;
	cout << "nhap a: ";
	cin >> a;
	int b;
	cout << "nhap b: ";
	cin >> b;
	int sum;
	setup(a, b, sum);
	return 0;
}
*/


/*
#include<iostream>
using namespace std;

int main() {
	int a;
	cout << "nhap so a: ";
	cin >> a;
	int b;
	cout << "nhap b: ";
	cin >> b;
	int sum;
	sum = ((a / b) + 1) * b;
	cout << sum;
	return 0;
}
*/









/*
Bài 15. Kiểm tra số chia hết cho 3 và 5
Input
Số nguyên n. (-1018 ≤ n ≤ 1018)
Output
In ra 1 nếu n chia hết cho cả 3 và 5, ngược lại in ra 0
Ví dụ
Input Output
30 1
25 0
*/


// su dung ham "bool" de in ra 1 va 0
// true =1 va false = 0



/*
#include<iostream>
using namespace std;
bool setup(int n) {
	if (n % 3 == 0 && n % 5 == 0) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	int n;
	cout << "nhap n: ";
	cin >> n;
	bool sum = setup(n);
	cout << sum;
	return 0;
}
*/

/*#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "nhap so n: ";
	cin >> n;
	bool sum;
	if (n % 3 == 0 && n % 5 == 0) {
		sum = true;
	}
	else {
		sum = false;
	}

	cout << sum;
	return 0;
}
*/











/*
Bài 16. Kiểm tra năm nhuận
Năm nhuận là năm chia hết cho 400 hoặc ( chia hết cho 4 và không chia hết cho
100).
Input
Năm là một số nguyên. (-106 ≤ n ≤ 106
)
Output
In ra INVALID nếu n là một số nguyên âm hoặc số 0. Nếu n là năm nhuận, in ra
YES, ngược lại in ra NO
Ví dụ
Input Output
2021 NO
10
2020 YES
-1982 INVALID
*/




/*
#include<iostream>
using namespace std;
void setup(int year) {
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		cout << "YES";
	}
	else if (year <= 0) {
		cout << "INVALID";
	}
	else {
		cout << "NO";
	}
}
int main() {
	int year;
	cout << "nhap so nam: ";
	cin >> year;
	setup(year);
	return 0;
}
*/


/*#include<iostream>
using namespace std;

int main() {
	int year;
	cout << "nhap nam: ";
	cin >> year;
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		cout << "YES";
	}
	else if (year <= 0) {
		cout << "INVALID";
	}
	else {
		cout << "NO";
	}
	return 0;
}
*/