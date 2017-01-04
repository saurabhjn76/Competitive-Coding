int square_root = (int) sqrt(num) + 1;
for (int i = 1; i < square_root; i++) { 
    if (num % i == 0&&i*i!=num)
        cout << i << num/i << endl;
    if (num % i == 0&&i*i==num)
        cout << i << '\n';
}