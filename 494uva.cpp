# include <cstdio>
# include <cstring>
# include <iostream>
int main()
{
    char str[1000];
    int i,count;
    bool flag;
    while(gets(str))
    {
       count = 0,flag = true;
      for(i=0;str[i];i++)
      {

               if((str[i]>='A' && str[i]<='Z')|| (str[i]>='a' && str[i]<='z'))
                {
                    if(flag)
                    count++;
                      flag = false;
                }
                else
                {
                 flag = true;
                }

      }
      printf("%d\n",count);
    }
    return 0;
}
