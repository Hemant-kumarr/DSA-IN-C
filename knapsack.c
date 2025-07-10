#include<stdio.h>
void bubbleSort(float arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
       
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(){
    int n ;
    int W = 15;
    printf("Enter the number of object : ");
    scanf("%d",&n);
    float p[n];
    float w[n];
    float r[n];
    for(int i = 0 ; i<n ; i++){
        printf("Enter obj%d profit : ",i+1);
        scanf("%f",&p[i]);
        printf("Enter obj%d weight : ",i+1);
        scanf("%f",&w[i]);

        r[i] = p[i]/w[i];
    }
    printf("Array of profit : \n");
    for(int j = 0 ; j<n ; j++){
        printf("%f ",p[j]);
    }
     printf("\nArray of weight : \n");
    for(int j = 0 ; j<n ; j++){
        printf("%f ",w[j]);
    }
     printf("\nArray of profit/weight : \n");
    for(int j = 0 ; j<n ; j++){
        printf("%.2f ",r[j]);
    }
    bubbleSort(p, n);
    printf("\nSorted array of profit : \n");
    for(int j = 0 ; j<n ; j++){
        printf("%.2f ",p[j]);
    }
    bubbleSort(w, n);
    printf("\nSorted array of weight : \n");
    for(int j = 0 ; j<n ; j++){
        printf("%.2f ",w[j]);
    } 
    bubbleSort(r, n);
    printf("\nSorted array of profit/weight : \n");
    for(int j = 0 ; j<n ; j++){
        printf("%.2f ",r[j]);
    } 
    float totalProfit = 0.0;
    for(int i = 0 ; i<n ; i++){
        if(W >= w[i]){
            W = W - w[i];  
            totalProfit += p[i];
        } else {
            totalProfit += r[i] * W;
            break;
        } 
    }
    printf("\nTotal profit is : %.2f\n", totalProfit);
    printf("Remaining weight is : %d\n", W);
    printf("Total weight is : %d\n", 15 - W);  

    return 0;   
}