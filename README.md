# FileIO

Using a given set of data, save it to a csv file. Read each line, add the numbers together, and print each word that many times.

### Starting data
```
1, 2, this
3, 3, is
8, 1, a
2, 4, lot
2, 1, of
4, 2, fun
```

### Desired output
```
this this this
is is is is is is
a a a a a a a a a 
lot lot lot lot lot lot
of of of
fun fun fun fun fun fun
```

## main
```
for each line in the file
	divide the data into variables
	assign the numbers as ints and the text as str
	total gets the sum of the two ints
	print str {total} times
```

