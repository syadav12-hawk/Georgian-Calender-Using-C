#include<stdio.h>
#include<conio.h>
void main(void)
{
 int y,i,j,t3;
 int ny,ly,dod,t,m,t2=0;
char day[7][10]={"Mon","Tue","Wed","Thrus","Fri","Sat","Sun"};
char mon[][20]={"January","Febuary","March","April","May","June","July","August","September","October","November","December"
};
int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
clrscr();
printf("Enter the year and month\n");
scanf("%d %d",&y,&m);
ny=y-1900;//ny is difference between starting year of GC and the enterted y
ly=ny/4;//Calculating if the y is leap year.
    if (y % 4 == 0) {
        if (y % 100 == 0) {
            // the year is a leap year if it is divisible by 400.
            if (y % 400 == 0)
                ly=ly-1;
        } else
            ly=ly-1;
    } 
ly=ly-1;
dod=ly*2+(ny-ly);
printf("The first day of the year %d is ",y);
t=dod%7;
printf("%s \n",&day[t][0]);
for(i=0;i<m-1;i++)
{
 t2=t2+month[i];
}
if((y%4==0)&&(m>2))
t2=t2+1;
t=t+(t2%7);
t=t%7;
printf("The first day of the month %s is  ",&mon[m-1][0]);
printf("%s\n",&day[t][0]);
printf("-----------------------------------%s %d------------------------------\n",&mon[m-1][0],y );
for(i=0;i<7;i++)
printf("%10s",&day[i][0]);
t3=t;
while(t3+1>0)
{
printf("          ");//No of space is(10)
t3=t3-1;
}
j=1;
if(y%4==0)
month[1]=29;
while(j<=month[m-1])
{
while(t<7)
{
if(j>month[m-1])
break;
printf("%10d",j);
t++;
j++;
}
printf("\n");
t=0;
}

getch();
}
