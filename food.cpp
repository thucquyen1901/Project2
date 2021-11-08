//#include<iostream>
//#include<iomanip>
//#include"Food.h"
//using namespace std;

//std::istream &operator >>(istream &in,DoAn &DA)
//{
//	cout<<"mua bao nhieu ";in>>DA.sl;
//	cout<<"lon ghi 1 nho ghi 2 ";in>>DA.loai;
//	return in;
//}
//void tienFood()
//{
//	DoAn ngot,pm,ly;
//	int tienbap,tiennuoc;
//	int bapngot,bappm,lync;
//	int chon,chon2;
//	cout<<"Ban co mua bap khong?(1 là có 2 là không) ";
//	cin>>chon;
//	if(chon==1)
//	{
//		cout<<"bap ngot ";cin>>ngot;
//		cout<<"bap pho mai ";cin>>pm;
//		if(ngot.loai==1) bapngot=45*ngot.sl;
//		else bapngot=35*ngot.sl;
//		if(pm.loai==1) bappm=50*pm.sl;
//		else bappm=40*pm.sl;
//	}
//	else
//	{
//		bapngot=0;
//		bappm=0;
//	}
//	tienbap=bapngot+bappm;
//	cout<<"Ban co mua nuoc uong khong?(1 là có 2 là không)";cin>>chon2;
//	if(chon2==1)
//	{
//		cout<<"nuoc ngot ";cin>>lync;
//		if(ly.loai=1) tiennuoc=25*lync;
//		else tiennuoc=20*lync;
//	}
//	else
//	{
//		tiennuoc=0;
//	}
//	int TienDoAn=tienbap+tiennuoc;
//	cout<<TienDoAn<<endl;
//}
