//code in c language for calculating remainder of given t test cases.

#include <stdio.h> 
int main() {
	// Read the number of test cases.
	int T;
	scanf("%d",&T);
	while (T--) {
		// Read the input a, b
		int a,b;
		scanf("%d %d",&a,&b);
		int ans;
		ans=a%b; // Compute the ans.
		printf("%d\n",ans);
	}
	return 0;
}
