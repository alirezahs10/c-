#include <iostream>
using namespace std;

class faktoriel 
{
	private:
	int x;
	
	public:
	void setA (int a)
	{
		x=a;
	}
	int result()
	{
		int k,rlt=1;
		for (k=1;k<=x;++k)
		{
			rlt=rlt*(k);
		}
		return rlt;
    }
};

int main() {
	int n,r,nr,nn,nnrr,rr;
	cout << "please enter n:" << endl;
	cin >> n;
    cout << "please enter r:" << endl;
	cin >> r;
	cout << endl;

	//int n=5,r=3, nr,nn, nnrr,rr;
	//int r=3;
    nr=(n-r);
    
    faktoriel fkl;
    
    fkl.setA(n);
    nn=fkl.result();
    
    fkl.setA(r);
    rr=fkl.result();
    
    fkl.setA(nr);
    nnrr=fkl.result();
    
	int finalResult;
	finalResult = (nn)/(rr*nnrr);
    cout << "result= " << finalResult << endl;
    return 0;
}

