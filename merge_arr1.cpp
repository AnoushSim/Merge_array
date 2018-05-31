#include <iostream>
int* merge_arrays(int* ,int* ,int ,int );
int main()
{
  const int n=5;
  const int m=7;
  int a[n]={1,3,5,7,9};
  int b[m]={2,4,6,8,10,11,12};
  int* p = merge_arrays(a,b,n,m);
  for(int i=0;i<n+m;++i)
  std::cout<<p[i]<<std::endl;
  return 0;
}
int* merge_arrays(int* a1,int* a2,int s1,int s2)
{
  int i=0, j=0, t=0;
  int size=s1+s2;
  int* result=new int[size];
  while(i<s1 && j<s2){
    if(a1[i]<a2[j]){
     result[t]=a1[i];
     t++;
     i++;
      
    }
     else {
       result[t]=a2[j];
       t++;
       j++;
  } }
  while(j<s2){
     result[t]=a2[j];
     t++;
     j++;
  }
  return result;
}
