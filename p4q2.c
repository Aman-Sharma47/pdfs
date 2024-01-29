/*Elect Good Leader - Fix-It
 Some students are competing for a leader position in upcoming elections at XYZ 
College. They are good in their qualities, helping nature, social service, etc. They 
are standing one by one and you will have to select a good leader.
 The selection has some rules like a person is considered better if he is better than 
all the participants to his right side and the rightmost person is always a leader.*/

#include <stdio.h>

int main() {
    // Input the number of students
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input the qualities of each student
    int qualities[n];
    printf("Enter the qualities of each student:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &qualities[i]);
    }

    // Rightmost person is always a leader
    int leaderIndex = n - 1;

    // Iterate from second to last student towards the first
    for (int i = n - 2; i >= 0; i--) {
        // Check if the current student is better than the leader
        if (qualities[i] > qualities[leaderIndex]) {
            leaderIndex = i;
        }
    }

    // Print the selected leader
    printf("Selected leader is student number %d.\n", leaderIndex + 1);

    return 0;
}