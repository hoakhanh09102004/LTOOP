#include <iostream>
using namespace std;
class Matran{
	int hang,cot;
	float mt[100][100];
	public:
		Matran(){
			hang=cot=0;
		}
		void nhap();
		void xuat();
		static Matran cong(Matran mt1,Matran mt2);
		static Matran tru(Matran mt1,Matran mt2);
		static Matran nhan(Matran mt1,Matran mt2);
};
void Matran::nhap(){
	cout<<"Nhap so hang=";cin>>hang;
	cout<<"Nhap so cot=";cin>>cot;
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			cout<<"mt["<<i<<","<<j<<"]=";
			cin>>mt[i][j];
		}
	}
}
void Matran::xuat(){
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++)
			cout<<"mt["<<i<<","<<j<<"]="<<mt[i][j]<<" ";
	    cout<<endl;
    }
}
Matran Matran::cong(Matran mt1,Matran mt2){
	Matran mt3;
	for(int i=0;i<mt1.hang;i++)
	    for(int j=0;j<mt1.cot;j++)
	        mt3.mt[i][j]=mt1.mt[i][j]+mt2.mt[i][j];
	return mt3;        
}
Matran Matran::tru(Matran mt1,Matran mt2){
	Matran mt3;
	for(int i=0;i<mt1.hang;i++)
	    for(int j=0;j<mt1.cot;j++)
	        mt3.mt[i][j]=mt1.mt[i][j]-mt2.mt[i][j];
	return mt3;        
}
Matran Matran::nhan(Matran mt1,Matran mt2){
	Matran mt3;
	for(int i=0;i<mt1.hang;i++)
	    for(int j=0;j<mt1.cot;j++)
	        mt3.mt[i][j]=mt1.mt[i][j]*mt2.mt[i][j];
	return mt3;        
}
int main(){
	Matran m;
	m.nhap();
	m.xuat();
	Matran m1;
	m1.nhap();
	m1.xuat();
	Matran m2=Matran::cong(m,m1);
	Matran m3=Matran::tru(m,m1);
	Matran m4=Matran::nhan(m,m1);
}
