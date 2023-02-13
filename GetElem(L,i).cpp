#define MaxSize 10
#include <stdio.h>
typedef struct 
{   
    int data[MaxSize];
    int length;
    /* data */
}SqList;
void InitList (SqList &L){
    for (int i = 0; i < MaxSize; i++)
        L.data[i]=0;
    L.length=0;
}
int GetElem(SqList &L,int i){
    return L.data[i-1];
}
int LocateElem(SqList & L, int e){
    for (int i = 0; i < L.length; i++)
    {
        if(L.data[i]==e)
        return i+1;/* code */
    }
    return 0;


}
int main(void){
    SqList L;
    InitList(L);
    return 0;
}