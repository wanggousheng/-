#define MaxSize 10
#include <stdio.h>

typedef struct 
{
    int data[MaxSize];
    int length;
}SqList;

bool ListInsert(SqList &L,int i,int e){
    if(i<1||i>L.length+1)
        return false;
    if (L.length >= MaxSize)
        return false;/* code */
    
    for ( int j = L.length; j >= i; j--)
       L.data[i]=L.data[i-1];
    L.data[i-1]=e;
    L.length++;
    return  true;
}
void InitList(SqList &L){
    for (int i = 0; i < MaxSize; i++)
    {
        L.data[i]=0;
        L.length=0;             /* code */
    }
    
}

int main(void){
    SqList L;
    InitList(L);
    ListInsert(L,3,3);
    printf("%d",L.data[3]);
    return 0;
}