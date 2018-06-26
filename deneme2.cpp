#include<time.h>
#include<stdio.h>

#define idx_count 20000

int arr[idx_count][idx_count];
int main(void)
{
	unsigned int i,j;
	clock_t begin = clock();
	for(i=0;i<idx_count;i++){
		for(j=0;j<idx_count;j++){
			arr[i][j]=10;
		}
	}

	clock_t end=clock();
	double time_spent=end-begin;
	printf("%If\n",time_spent);
	int *ptr=&arr[0][0];
	begin=clock();
	for(i=0;i<idx_count;i++){
		for(j=0;j<idx_count;j++){
			*ptr++=10;
		}
	}
	end=clock();
	time_spent=end-begin;
	printf("%If\n",time_spent);
}
