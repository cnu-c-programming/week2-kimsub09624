  1 #include <stdio.h>
  2
  3 int main() {
  4         printf("%10s %10s %10s\n", "name", "id", "value");
  5         printf("%10s %010d %10.2f\n", "kim", 12, 4.12);
  6         printf("%10s %010d %10.2f\n", "lee", 1922, 3.21);
  7         printf("%10s %010d %10.2f\n", "park", 432, 1.0);
  8
  9         return 0;
 10 }
