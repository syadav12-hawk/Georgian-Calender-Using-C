#include<stdio.h>
#include<conio.h>
int check_leapyr(int);
void main(void)
{
 int y,i,j,t3,total_ly_from_1291=0,k=0,total_num_of_days_from_1291=0;
 int l_yr_check=-1;
 int ny,ly,dod,t,m,t2=0;
char day[7][10]={"Mon","Tue","Wed","Thrus","Fri","Sat","Sun"};
char mon[][20]={"January","Febuary","March","April","May","June","July","August","September","October","November","December"
};
int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
//clrscr();
printf("Enter the year and month\n");
scanf("%d %d",&y,&m);
l_yr_check=check_leapyr(y);
//ny=y-1900;
for (i=1291;i<y;i++)
{
    k=check_leapyr(i);
    if (k==1)
    {
        total_ly_from_1291=total_ly_from_1291+1;
        total_num_of_days_from_1291=total_num_of_days_from_1291+366;
    }
    else
    total_num_of_days_from_1291=total_num_of_days_from_1291+365;
}
ly=total_ly_from_1291;
printf("Number of Leap Years since 1291 ,excluding %d : %d\n",y,ly);
printf("Number of Days since 1291 : %d\n",total_num_of_days_from_1291);
//if(l_yr_check==1)
//ly=ly-1;

//dod=ly*2+(ny-ly);
printf("The first day of the year %d is ",y);
//t=dod%7;
t=total_num_of_days_from_1291%7;
printf("%s \n",&day[t][0]);
for(i=0;i<m-1;i++)
{
 t2=t2+month[i];
}

l_yr_check=check_leapyr(y);

if((l_yr_check==1)&&(m>2))
t2=t2+1;
t=t+(t2%7);
t=t%7;
printf("The first day of the month %s is  ",&mon[m-1][0]);
printf("%s\n",&day[t][0]);
printf("-----------------------------------%s %d------------------------------\n",&mon[m-1][0],y );
for(i=0;i<7;i++)
printf("%10s",&day[i][0]);
printf("\n");
t3=t;
while(t3>0)
{
printf("          ");//No of space is(10)
t3=t3-1;
}
j=1;
    if (l_yr_check== 1) {

            month[1]=29;
    } 

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


int check_leapyr(int year)
{
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            // the year is a leap year if it is divisible by 400.
            if (year % 400 == 0)
                return 1;
            else
                return 0;
        } else
            return 1;
    } else
        return 0;
        
}  

