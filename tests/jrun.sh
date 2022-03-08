file=$1
javac $file
b=${file%.java}
echo "----------------------"
java $b
rm "$b.class"