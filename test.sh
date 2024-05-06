for ((i = 1; i <= 10; i ++)) do
    timeout 1s ./b < "din${i}" > "output${i}"
done
