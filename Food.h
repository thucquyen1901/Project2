#include<iostream>
using namespace std;
class DoAn
{
	public:
		int sl,loai;
	public:
		DoAn(int =0,int =0)
		{
			this->sl=sl;
			this->loai=loai;
		}
		~DoAn(){}
	    friend istream &operator>>(istream &in,DoAn &DA);
	    void tienFood();
};
