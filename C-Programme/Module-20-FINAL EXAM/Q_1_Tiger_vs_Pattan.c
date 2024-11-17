// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int t;
//     scanf("%d",&t);
//       int tiger=0,pathan=0;
//     for(int i=0;i<t;i++)
//     { 
//         int a,s;
//         scanf("%d%d",&a,&s);
//          if(a>s)
//          {
//             tiger++;
//          }
//          else if(s>a)
//          {
//             pathan++;
//         }
     
    
//     if(tiger>pathan)
//     {
//         printf("Tiger\n");
//     }
//     else if(pathan == tiger)
//     {
//         printf("Draw\n");
//     }
//     else if(pathan>tiger)
//     {
//         printf("Pathan\n");
//     }
// }
//     return 0;
// }
#include<stdio.h>
#include<string.h>

int main() {
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) 
    {
        int n;
        scanf("%d", &n);
        
        char s[1001];
        scanf("%s", s);
        
        int tiger = 0, pathan = 0;
        for (int j = 0; j < n; j++)
         {
            if (s[j] == 'T') 
            {
                tiger++;
            } 
            else if (s[j] == 'P') 
            {
                pathan++;
            }
        }
        
        if (tiger > pathan) 
        {
            printf("Tiger\n");
        } 
        else if (pathan > tiger) 
        {
            printf("Pathaan\n");
        } 
        else 
        {
            printf("Draw\n");
        }
    }
    
    return 0;
}
