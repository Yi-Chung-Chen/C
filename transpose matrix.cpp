
#include <iostream>
using namespace std;
int main()
{
    //課題:轉置矩陣
    int row,col;
    cout<<"enter row and column of array :";
    cin>>row>>col;
    int array[row][col];
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cout<<"enter array("<<i<<","<<j<<") =";
            cin>>array[i][j];
        }
    }//輸入矩陣內容
    
    int temporary_array[row][col];
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            temporary_array[j][i]=array[i][j];
        cout<<endl;
    }//開始轉置
    
        
    }
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cout<<temporary_array[i][j]<<"  ";
        }
    cout<<endl;
    }//印出結果
    return 0;
}
