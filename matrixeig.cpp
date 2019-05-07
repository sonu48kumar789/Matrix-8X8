#include<iostream>
using namespace std;
int main(){
    int a[8][8],b[8][8],c[8][8],d[8][8],e[8][8],f[8][8],g[8][8],h[8][8];
    for(int m=0;m<8;m++){
        for(int t=0;t<8;t++){
            cout<<"a"<<m+1<<t+1<<" = ";
            cin>>a[m][t];
        }
    }
    for(int m=0;m<8;m++){
        for(int t=0;t<8;t++){
            cout<<"b"<<m+1<<t+1<<" = ";
            cin>>b[m][t];
        }
    }
    for(int m=0;m<8;m++){
        for(int t=0;t<8;t++){
            c[m][t] = a[m][0]*b[0][t] + a[m][1]*b[1][t] + a[m][2]*b[2][t]+ a[m][3]*b[3][t]+ a[m][4]*b[4][t]+ a[m][5]*b[5][t]+ a[m][6]*b[6][t]+ a[m][7]*b[7][t];
        }
    }
    for(int m=0;m<8;m++){
        for(int t=0;t<8;t++){
            cout<<c[m][t]<<"\t";
        }
        cout<<endl;
    }
}

