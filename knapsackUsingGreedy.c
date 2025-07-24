# include<stdio.h>
void knapsack(int n, float weight[], float profit[], float capacity)
{
float x[20]={0.0}, tp = 0;
int i, j, rc;
rc = capacity;
for (i = 0; i < n; i++)
{
    if (weight[i] > rc)
	break;
    else
    {
	x[i] = 1.0;
	tp = tp + profit[i];
	rc = rc - weight[i];
	}
}
if (i < n)
    x[i] = rc / weight[i];
tp = tp + (x[i] * profit[i]);

printf("\nThe Knapsack Matrix is: ");
for (i = 0; i < n; i++)
    printf("%f\t", x[i]);
printf("\nMaximum profit is: %f", tp);
}

int main()
{
float weight[20], profit[20], capacity;
int num, i, j;
float ratio[20], temp;

printf("\nEnter the no. of objects:");
scanf("%d", &num);
printf("\nEnter the profits and weight of each object: ");
for (i = 0; i < num; i++) {
    scanf("%f %f", &profit[i],&weight[i] );
}
printf("\nEnter the capacityacity of knapsack: ");
scanf("%f", &capacity);
//Find the Ratio of Profit/Weight
for (i = 0; i < num; i++)
{
    ratio[i] = profit[i] / weight[i];
}
//Arange in Descending Order

for (i = 0; i < num; i++)
{
for (j = i + 1; j < num; j++)
{
    if (ratio[i] < ratio[j])
    {
	    temp = ratio[j];
	    ratio[j] = ratio[i];
	    ratio[i] = temp;

	    temp = weight[j];
	    weight[j] = weight[i];
	    weight[i] = temp;

	    temp = profit[j];
	    profit[j] = profit[i];
	    profit[i] = temp;
    }
}
}
knapsack(num, weight, profit, capacity);
return(0);
}
