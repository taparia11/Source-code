#include <stdio.h>
#include <string.h>

int main()

{
        int i,a,b,c,j,e=0,f=0,g=0,h,d[100];
        char str[100],st[10];
        scanf("%s",str);
        a=strlen(str);
        for(i=0;i<a;i++)
        {
                if(str[i]>47 && str[i]<58)
           {    
                   st[f]=str[i];
                   e++;f++;
                   goto L1;
           }

                if(e>0)
                {
                        for(int j=i-1;j>i-e;j--)
                        if(g<=f)
                        {
                        str[j]=st[g];
                        g++;
                        }
                }
                f=0;e=0;
                if(str[i] < 91 && str[i]>64)
                {
                str[i]=str[i]-7;
                if(str[i]<64)
               { b=str[i];
                c=64-b;
                str[i]=90-c; }
                }
                if(str[i] < 122 && str[i]>96)
                {str[i]=str[i]-5;
                if(str[i]<96)
               { b=str[i];
                c=96-b;
                str[i]=122-c;
        }}

                 L1:
                 c=7;

        
        
        }
         if(e>0)
                {
                        for(j=i-1;j>i-e-1;j--)
                        if(g<=f)
                        {
                        str[j]=st[g];
                        g++;
                        }
                }
        printf("%s",str);
        return 0;

}