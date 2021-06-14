/* Enter your solutions in this file */
#include <stdio.h>
int max(int z[],int count)
{
  count=sizeof(z);
  for(int i=0;i<count;i++)
  {
    if(z[0]<z[i+1])
    {
      z[0]=z[i];
    }
  }
  printf("%d",z[0]);
}
