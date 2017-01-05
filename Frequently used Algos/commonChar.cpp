#define ALPHABETS_COUNT 26 
int commonChars(char *s1, char *s2)
{
    int c_count = 0, i; 
    int arr1[ALPHABETS_COUNT] = {0}, arr2[ALPHABETS_COUNT] = {0};

    /* Compute the number of occurances of each character */
    while (*s1) arr1[*s1++-'a'] += 1;
    while (*s2) arr2[*s2++-'a'] += 1;       

    /* Increment count based on match found */
    for(i=0; i<ALPHABETS_COUNT; i++) {
        if(arr1[i] == arr2[i]) c_count += arr1[i];
        else if(arr1[i]>arr2[i] && arr2[i] != 0) c_count += arr2[i];
        else if(arr2[i]>arr1[i] && arr1[i] != 0) c_count += arr1[i];
    }

    return c_count;
}