    #include<stdio.h>
    int main()
    {
    
    int n,temp,max=0,sec_max;
    int min=0,p=0,q=0,ar_size;
     scanf("%d",&n);
     int a[n],sub[100000][n];
     
     for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
     
      //sort array
        for (int i=0; i<n; ++i)
        {
            for (int j=i+1; j<n; ++j)
            {
              if (a[i] > a[j])
              {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
              }
            }
        }
      //count array size
      ar_size=sizeof(a)/sizeof(a[0]);
    while(min<ar_size)
    { 
     //possible subarrays
     for(int i=n-1;i>=min;i--)
     {
      for(int j=i;j>=min;j--)
      {  //printf("%d ",a[j]);
        
         //store in sub[] array
         sub[p][q]=a[j];
          
      //   printf("%d ",sub[p][q]);
     
     // printf("p=%d q=%d\n",p,q);
         q++;
      
     
         }
       
        p++;
        q=0;
     
     }
    min++;
    }
    int j=0,r=0,bcount=0;
    int h=0,huarray[100000],flag=1;
    for(int i=0;i<15;i++)
     for(int p=i+1;p<15;p++)
    { 
     
       for(int x=0;x<h;x++)
       { 
       if(huarray[x]==sub[i][j])
        {  flag=0; }
       }
       
      if(flag==1)
        {
          if((sub[i][j]==sub[p][r])&&(sub[i][j+1]==sub[p][r+1]))
         {
          // printf("%d %d\n",sub[i][j],sub[i][j+1]);
           bcount++;
           huarray[h]=sub[i][j];
           h++;
           break;
         }
        }
     
     }
    printf("%d",bcount+1);
    return 0;
    }
     