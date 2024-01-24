#include<stdio.h>
int main()
{
unsigned int phy, chem, maths, itp, eng; 
    printf("Enter your Physics marks: ");
    scanf("%d", &phy);
    if(phy>100 || phy<0)
    {
        printf("invalid input \n");
    printf("Enter your physic smarks: "); 
    scanf("%d", &phy);
    }
    else
    {
        printf("enter chem marks:");
        scanf("%d",&chem);
        if(chem>100 || chem<0)
        {
             printf("invalid input \n");
             printf("enter chem marks:");
        scanf("%d",&chem);

        }
        else
        {
    printf("Enter your Maths marks: ");
    scanf("%d", &maths);
        
        if(maths>100 || maths<0)
        {
             printf("invalid input \n");
             printf("Enter your Maths marks: ");
            scanf("%d", &maths);
            }
    else
    {
    printf("Enter your ITP marks: "); 
    scanf("%d", &itp);
    
    if(itp>100 || itp<0)
    {
         printf("invalid input \n");
         printf("Enter your ITP marks: "); 
    scanf("%d", &itp);
    }
    else
    {
    printf("Enter your English marks: ");
    scanf("%d", &eng);
    if(eng>100 || eng<0)
    {
         printf("invalid input \n");
        printf("Enter your English marks: ");
    scanf("%d", &eng); 
    }
    }
    }
    }
    }
 


float total= phy+chem+itp+eng+maths; 
float percent= (total/500.0)*100; 
printf("Your percentage is %f \n", percent);
if (percent < 45) 
    {
    printf("fail");
    }
    else if (percent >45 & percent <60)
    {
    printf("Second class");
    }
    else if (percent >60 & percent <75)
    {
    printf("First class");
    } 
    else if (percent >75 & percent <-100)
    printf("Gold medalist");
return 0;
        }