

using namespace std;
#define Array_size 5
int press_array_size(int v){
    int sum = 0;
    if(v>0){
        sum=v+press_array_size(v-1);
    }
    else
        return sum;
}
int main()
{
    int array[Array_size][Array_size] = {{7,8,12,21,9},
                                          {0,5,14,17,6},
                                          {0,0,7,23,24},
                                          {0,0,0,32,19},
                                          {0,0,0,0,8} };
    int press_array[press_array_size(5)];
    int t=0;
        for(int i=0;i<Array_size;i++){
            for(int j=0;j<Array_size;j++){
                if(array[i][j]!=0){
                    press_array[t]=array[i][j];
                    t++;
                }
            }
        }
    for (int k = 0;k<press_array_size(5);k++){
        cout<<press_array[k]<<" ";
    }
    system("pause");
    return 0;
}
