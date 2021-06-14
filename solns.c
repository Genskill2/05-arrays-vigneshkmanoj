/* Enter your solutions in this file */
#include<stdio.h>
 int max(int z[],int count)
{
  for(int i=0;i<count;++i)
  {
    if(z[0]<z[i])
    {
      z[0]=z[i];
    }
  }
  return z[0];
}
  int min(int z[],int count)
{
  for(int i=0;i<count;++i)
  {
    if(z[0]>z[i])
    {
      z[0]=z[i];
    }
  }
  return z[0];
}
  float average(int z[],int count)
  {
  float sum=0;
  for(int i=0;i<count;i++)
  {
  sum=sum+z[i];
  }
  return sum/count;
  }
  int mode(int z[],int n)
  {
  int value=0,max_count=0;
  for(int i=0;i<n;i++)
  {
  int count=0;
  for(int j=0;j<n;j++)
  {
  if(z[i]==z[j])
  count=count+1;
  }
  if(count>max_count)
  {
  max_count=count;
  value=z[i];
  }
  }
  return value;
  }
