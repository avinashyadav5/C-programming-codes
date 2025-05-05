#include <stdio.h>

int main()
  {
	int n, *m;
	printf("Enter size of array: ");
	scanf("%d", &n);
	int a[n];
	int *p;
	p = a;
	for(int i = 0; i < n; i++){
		scanf("%d", p);
		p++;
	}
	printf("Your array is:\n");
	p = a;
	for(int i = 0; i < n; i++)
	   {
		printf("%d ", *p);
		p++;
	   }
	p = a;
	for(int i = 0; i < n; i++)
	   {
		if(*p < *(a+i)){
			*p = *(a+i);
		}
		else{
			*p = *p;
		}
		m = p;
	   }
	printf("/n");
	printf("The largest integer in the array is: %d\n", *m);
	return 0;
    }

