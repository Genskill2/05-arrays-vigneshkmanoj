/* Enter your solutions in this file */
#include <stdio.h>
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
