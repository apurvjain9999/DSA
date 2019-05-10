 #include<stdio.h>
int main()
{
    char ch[5]="Kota";
    char ch1[5];
    int i,j;
    for (i=0,j=3;i<4;i++,j--)
    {
        ch1[i]=ch[j];
    }
    ch1[4]='\0';
    printf("Original String: %s\n",ch);
    printf("Reverse String: %s\n",ch1);
    return 0;
}
