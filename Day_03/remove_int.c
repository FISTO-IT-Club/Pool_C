void remove_int( int arr[],int size,int traget) 
{ int*p;
 p=arr;
 int i;
for(i=0;i<size,i++)
 {if (arr[i]==traget ) p=p+i;break;} 
for(;i<(size-1);i++)
arr[i]=arr[i+1];
arr=realloc(arr,(size-1)*sizeof(int));
}

