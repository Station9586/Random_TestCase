score=0

for ((i = 1; i <= 10; i ++)); do
    file1="ac${i}"
    file2="output${i}"
    diff -w "$file2" "$file1" > "c"
    if [ -s "c" ]; then
        echo "$i: WA"
    else
        echo "$i: AC"
        ((score += 10))
    fi
done

echo "Score: $score"