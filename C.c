#include<stdio.h>

int main() {

int n;

scanf("%d",&n);

int arr[n];

for(int i=0;i<n;i++) {

scanf("%d", &arr[i]);

}

int j=arr[0], flag=0;

for(int i=1;i<n;i++) {

if(arr[i]<j) {

flag=1;

}

j=arr[i];

}



if (flag == 0) {



printf("Yes\n");

}else{

printf("no\n");

}

return 0;

}
