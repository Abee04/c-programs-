 #include<stdio.h>
 
 int main()
{
  int i,arr[5],num;

//to know no of elements to store
  printf("\nInput the no of elements to store in the array : ");
  scanf("%d",&num );

 //to get n no of elements 
  printf("\nInput %d number of elements in the array : ",num);
  
  for(i=0 ;i<num ;i++)
  {
    printf("element - %d : ",i);
    scanf("%d",&arr[i]);
  }

//to print the output
  printf("\nthe value store into array are: \n");
  for ( i=0; i<num; i++)
  {
    printf("%d \t",arr[i]);
  }

  printf("\nthe value store into array in reverse are: \n");
  for ( i=num-1; i>=0; i--)
  {
    printf("%d \t",arr[i]);
  }
    
  return 0;
     
 }
