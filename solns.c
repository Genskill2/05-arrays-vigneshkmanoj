/* Enter your solutions in this file */
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
