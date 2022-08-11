#include <iostream>
using namespace std;

void XepLoai(float dtb, float a, float b, float c)
{
	dtb = (a + b + c ) / 3;
	cout<<"\nDiem TBC He 10 :"<<dtb<<endl;
	cout<<endl;
	if (dtb >= 9 && dtb <10)
	{
		cout << "Xep Loai Xuat Sac" << endl;
	}
	else if(dtb >= 8 && dtb <9)
	{
		cout<<"Xep Loai Gioi "<<endl;
	}
	else if(dtb >= 7 && dtb <8)
	{
		cout<<"Xep Loai Kha "<<endl;
	}
	else if(dtb >= 6 && dtb <7)
	{
		cout<<"Xep Loai Trung Binh "<<endl;
	}
	else if(dtb >= 5 && dtb <6)
	{
		cout<<"Xep Loai Yeu "<<endl;
	}
	else if(dtb < 5)
	{
		cout<<"Xep Loai Kem "<<endl;
	}
	cout<<endl;
}

int XepLoai_he4(float dtb, float a, float b, float c)
{
	dtb = (a + b + c ) / 3;
	
	
		if (dtb >= 9 && dtb <10)
		{
			int tbc4 = 4;
			cout<<"Diem TBC He 4 : "<<tbc4<<" => A+"<<endl;
			return tbc4;
		}
		
		else if(dtb >= 8 && dtb <9)
		{
			float tbc4 = 3.5;
			cout<<"Diem TBC He 4 : "<<tbc4<<" => A"<<endl;
			return tbc4;
		}
		else if(dtb >= 7 && dtb <8)
		{
			int tbc4 = 3;
			cout<<"Diem TBC He 4 :  "<<tbc4<<" => B+"<<endl;
			return tbc4;
		}
		else if(dtb >= 6 && dtb <7)
		{
			float tbc4 = 2.5;
			cout<<"Diem TBC He 4 :  "<<tbc4<<" => B"<<endl;
			return tbc4;
		}
		else if(dtb >= 5 && dtb <6)
		{
			int tbc4 = 2;
			cout<<"Diem TBC He 4 : "<<tbc4<<" => C"<<endl;
			return tbc4;
		}
		else if(dtb < 5)
		{
			int tbc4 = 1;
			cout<<"Diem TBC He 4 : "<<tbc4<<" => D/F"<<endl;
			return tbc4;
		}
	return 0;
}

int main()
{
	float a, b, c, dtb;
	cout<<"Moi Ban Nhap Thong Tin Hoc Sinh UNETI"<<endl;
	cout << "\tNhap Diem Toan: ";
	cin >> a;
	cout << "\tNhap Diem Ly: ";
	cin >> b;
	cout << "\tNhap Diem Hoa: ";
	cin >> c;
	XepLoai_he4(dtb, a,b, c);
	XepLoai(dtb, a,b, c);
return 0;
}
