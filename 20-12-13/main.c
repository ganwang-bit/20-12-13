//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int t;
//    while(scanf("%d",&t)!=EOF)
//    {
//        if(t>0)
//        {
//            printf("%d",1);
//        }
//        else if(t==0)
//            printf("%.1f",0.5);
//        else
//            printf("%d",0);
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a,b;
//    while((scanf("%d",&a)!=EOF)&&(scanf("%d",&b)))
//    {
//        if(a>b)
//            printf("%d>%d\n",a,b);
//        else if(a==b)
//            printf("%d=%d\n",a,b);
//        else
//            printf("%d<%d\n",a,b);
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//    char b,a;
//    while(scanf("%c",&b)!=EOF)
//    {
//        getchar();
//        a=tolower(b);
//        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
//            printf("Vowel\n");
//        else
//            printf("Consonant\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a;
//    while(scanf("%d",&a)!=EOF)
//    {
//        if(a%2==0)
//            printf("Even\n");
//        else
//            printf("Odd\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a;
//    while(scanf("%d",&a)!=EOF)
//    {
//        if(a>=60)
//            printf("Pass\n");
//        else
//            printf("Fail\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a;
//    while(scanf("%d",&a)!=EOF)
//    {
//        if(a>=90&&a<=100)
//            printf("Perfect\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a;
//    while(scanf("%d",&a)!=EOF)
//    {
//        if(a>=140)
//            printf("Genius\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//    char a;
//    while(scanf("%c",&a)!=EOF)
//    {
//        getchar();
//        if(isupper(a))
//            printf("%c\n",tolower(a));
//        else
//            printf("%c\n",toupper(a));
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//    char ch;
//    while((ch=getchar())!=EOF)
//    {
//        getchar();
//        if(isalpha(ch))
//            printf("%c is an alphabet.\n",ch);
//        else
//            printf("%c is not an alphabet.\n",ch);
//
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a,b,c,tmp;
//    while((scanf("%d",&a)!=EOF)&&(scanf("%d",&b)!=EOF)&&(scanf("%d",&c)!=EOF))
//    {
//        getchar();
//        if(a<b)
//        {
//            tmp=b;
//            b=a;
//            a=tmp;
//        }
//        if(a<c)
//        {
//            tmp=c;
//            c=a;
//            a=tmp;
//        }
//        printf("%d\n",a);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int countA=0,countB=0;
//    char a;
//    while((a=getchar())!='0')
//    {
//        if(a=='A')
//            countA++;
//        if(a=='B')
//            countB++;
//    }
//    if(countA>countB)
//        printf("A");
//    else if(countA <countB)
//        printf("B");
//    else
//        printf("E");
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int cmp(const void* a,const void* b)
//{
//    return *(int*)b-*(int*)a;
//}
//int main()
//{
//    int a[40]={0};
//    int n;
//    scanf("%d",&n);
//    int i;
//    int (*p)(const void*,const void*)=cmp;
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    qsort(a,n,sizeof(int),p);
//    for(i=0;i<5;i++)
//    {
//        printf("%d ",a[i]);
//    }
//    return 0;
//}
#include <stdio.h>

void main(void)

{

	int num,digit[8],i,j;

	scanf("%d",&num);

	for(i=0;num;i++)

	{

		digit[i]=num%10;

		num=num/10;

	}

	printf("����������ǣ�");

	for(j=0;j<i-1;j++)

printf("%2d,",digit[j]);

	printf("%2d\n",digit[j]);

}
