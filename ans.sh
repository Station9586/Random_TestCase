g++ -std=c++20 -O2 -Wall -Wextra a.cpp -o a;
for ((i = 1; i <= 10; i ++)) do
    timeout 1s ./a < "din${i}" > "ac${i}"
done
