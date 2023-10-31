#include <iostream>
using namespace std;
class PhanSo{
    int tu,mau;
    public:
//static PhanSo tong(PhanSo ps1 , PhanSo ps2);
    PhanSo(){
        tu=0;mau=0;
    }
 PhanSo (int a,int b)
    {
        tu=a;
        mau=b;
    }
   
    void inPS(){
        cout<<"Phan so: ("<<tu<<"/"<<mau<<")"<<endl;
    }
    PhanSo tongPS(PhanSo ps){
        PhanSo p;
        p.tu=tu*ps.mau+ps.tu*mau;
        p.mau=mau*ps.mau;
        return p;
    }   
	PhanSo hieuPS(PhanSo ps);
	PhanSo tichPS(PhanSo ps);
	PhanSo chiaPS(PhanSo ps);
    PhanSo rutGon();
    int uscln(int a, int b);
    
    
    
    friend PhanSo tong(PhanSo ps1,PhanSo ps2){
    	PhanSo p;
        p.tu=ps1.tu*ps2.mau+ps2.tu*ps1.mau;
        p.mau=ps1.mau*ps2.mau;
        return p;
	}
};
int PhanSo::uscln(int a, int b){
	while (a!=b)
		if (a>b)
			a=a-b;
		else
			b=b-a;
	return a;
}
PhanSo PhanSo::rutGon(){
	int us=uscln(abs(tu),abs(mau));
	tu=tu/us; mau=mau/us;
}
int main()
{
    PhanSo ps1(4,7);
    ps1.inPS();
    PhanSo ps2(9,7);
    ps2.inPS();
    //PhanSo ps3= PhanSo::tong(ps1,ps2);
    PhanSo ps3=ps1.tongPS(ps2);
    ps3.rutGon();
    ps3.inPS();
}
