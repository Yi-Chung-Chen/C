#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    //課題:矩陣相乘
    
    int NA,MA;
    re:cout<<"enter dimension of array A :"; cin>>NA>>MA; cout<<""<<endl;
    int array_A[NA][MA];
    
    int NB,MB;
    cout<<"enter dimension of array B :"; cin>>NB>>MB; cout<<""<<endl;
    int array_B[NB][MB];
    
    if (MA != NB){
        cout<<"Please re-enter the dimension...";
        goto re;
    }//防笨機制
    
    
    for(int i=0;i<NA;i++){
        for(int j=0;j<MA;j++){
            cout<<"array A("<<i<<","<<j<<") = ";
            cin>>array_A[i][j];
            cout<<endl;
        }
    }//寫入矩陣A的內值
    
    for(int k=0;k<NB;k++){
        for(int l=0;l<MB;l++){
            cout<<"array B("<<k<<","<<l<<") = ";
            cin>>array_B[k][l];
            cout<<endl;
        }    
    }//寫入矩陣B的內值
    
    //執行乘法
    
    int result[NA][MB];
    for (int m=0;m<NA;m++){
        for (int n=0;n<MB;n++){
            result[m][n]=0;
            for(int o=0;o<MA;o++){
            result[m][n]+=array_A[m][o]*array_B[o][n];   
            }
        }
    }
    
    for (int a=0;a<NA;a++){
        for (int b=0;b<MB;b++){
            cout<<result[a][b]<<"  ";
        }
    cout<<""<<endl;
    }
    return 0;
}
