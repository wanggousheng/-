#include <stdio.h>
#include <stdlib.h>
int cmp_int(const void * e1, const void * e2)
{
    return *(int *)e1 - *(int *)e2;
}
void swap(char* buff1,char *buff2,int width)
{
    char * temp;
    int i=0;
    for(i=0;i<width;i++)//对每个元素字节进行交换
    {
       
        *temp = *buff1;
        *buff1 =  *buff2;
        *buff2 =*temp;
        buff1++;
        buff2++;
    }
}
void my_qsort(void * base,int SIZE ,int width,int (*cmp)(void * e1,void * e2))
{
    int i =0;
    for(i = 1;i < SIZE;i++)
    {
        for(int j =0;j< SIZE -i;j++)
        {
            if(cmp((char*)base +j*width,(char*)base+(j+1)*width)>0)//将base强制转化为char * ，由于char* 为一个字节，所以对不同
                                                                    //类型的下一个元素可以用(char*)base +j*width表示
            swap((char*)base +j*width,(char*)base+(j+1)*width,width);

        }
    }

   
}
void test()
{
    int arr[10]={9,8,7,6,5,4,3,2,1,0};
    int sz = sizeof(arr)/sizeof(arr[0]);
    //qsort(arr,sz,sizeof(arr[0]),cmp_int);
    int i =0;
    my_qsort(arr,sz,sizeof(arr[0]),cmp_int);
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }

}

int main (void)
{
    test();
    return 0;
}
