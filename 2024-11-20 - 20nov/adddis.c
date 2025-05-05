#include <stdio.h>
struct Distance
  {
	int feet;
	float inch;
  };
	int main()
		{
			struct Distance d1, d2, d;
			printf("Enter data for 1st distance\n");
			printf("Enter feet: \n");
			scanf("%d", &d1.feet);
			printf("\Enter inch: \n");
			scanf("%f", &d1.inch);
			printf("Enter data for 2nd distance\n");
			printf("Enter feet: \n");
			scanf("%d", &d2.feet);
			printf("Enter inch: \n");
			scanf("%f", &d2.inch);
			d.feet = d1.feet+d2.feet;
			d.inch = d1.inch+d2.inch;
		if (d.inch>12.0)
			{
				d.inch = d.inch-12.0;
				++d.feet;
			}
	   printf("Sum of distances = %d\' %.1f\"", d.feet, d.inch);
    return 0;
  }

