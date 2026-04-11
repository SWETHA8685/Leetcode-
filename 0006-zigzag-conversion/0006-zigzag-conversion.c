#include <stdio.h>
#include <string.h>
#define SIZE 1000
char* convert(char* s, int numRows) {
    static char s1[SIZE];
    char rows[numRows][SIZE];
    int n=strlen(s);
    int i;
    int c=0;int l=0;
    if(numRows==1)
     return s;
    for(int i=0;i<numRows;i++)
      rows[i][0]='\0';
    for(i=0;i<n;i++)
    {
        int rowlen=strlen(rows[c]);
        rows[c][rowlen]=s[i];
         rows[c][rowlen+1]='\0';
        
        if(c==0|| c==numRows-1)
        {
            l=!l;
        }
    c+=l?1:-1;
    }
    s1[0]='\0';
    for(i=0;i<numRows;i++)
    {
        strcat(s1,rows[i]);
    }
    return s1;
}
    