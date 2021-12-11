#include <iostream>

using namespace std;
#define MAXSTACK 100
int stack[MAXSTACK];
int top = -1;
int isempty(){
    if(top==-1){
        return 1;
    }
    else
        return 0;
}

int pop(){
    if (isempty()){
        return -1;
    }
    else
        return stack[top--];
}

int push(int data){
    if(top>=MAXSTACK){
        cout<<"滿了塞不下";
        return 0;
    }
    else{
        stack[++top] = data;
        return 1;
    }
}
int main()
{
    int value;
    int i ;
    do{
        cout<<"enter stact print 1 ,leave print 0,terminate print -1:";
        cin>>i;
        if(i==-1){
            break;
        }
        else if (i==1){
            cout<<"enter the value";
            cin>>value;
            push(value);
        }
        else if (i==0){
            cout<<"leave value is"<<pop();
        }}while(i!=1);
        
        cout<<"-------------------------"<<endl;
        while(!isempty()){
            cout<<"the sequence of stack's leave value :"<<pop();
        }
        cout<<"-------------------------"<<endl;
    return 0;
}
