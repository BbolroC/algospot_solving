recfibo := method(num, if(num < 2, 1, recfibo(num - 1) +  recfibo(num - 2)))

recfibo(6) println

loopfibo := method(n,
		if(n < 2, 1,
			n_1 := 1
			n_2 := 1
			sum := 2
			for(i, 2, n,
				sum = n_1 + n_2
				n_1 = n_2
				n_2 = sum
			)
			sum
		)
	)

loopfibo(6) println

preDivision := Number getSlot("/")
Number / := method(n, if(n == 0, 0, preDivision(n)))

(10 / 2) println
(10 / 0) println

List sum2d := method(reduce(a, b, a + b sum ,0))

x := list(	list(1, 2, 3),
			list(4, 5, 6),
			list(7, 8, 9))

x sum2d println

List myAverage := method(sum / size)

list(1, 2, 3) myAverage println

List strictSum := method(reduce(accum, item, 
		if( not (item isKindOf(Number)), Exception raise("Only numbers allowed"))
		accum + item))

List strictAverage := method(strictSum / size)

List2D := List clone

dim := method(x, y, List2D clone setSize(y) mapInPlace(_, List clone setSize(x)))

dim(5, 2) println

List2D set := method(x, y, value, at(y) atPut(x, value))
List2D get := method(x, y, at(y) at(x))

l := dim(5, 2)
l set(2, 1, "foo")
l get(2, 1) println

List2D transpose := method(
		other := dim(size, at(0) size)
		foreach(y, row, row foreach(x, value, other set(y, x, value)))
		other
		)

List2D with := method(source,
		result := dim(source size, source at(0) size)
		source foreach(y, row, row foreach(x, value, result set(x, y, value)))
		result
		)

l := dim(2, 2)
l set(0, 0, 1)
l set(1, 0, 2)
l set(0, 1, 3)
l set(1, 1, 4)
l println
l transpose println

List2D serializeTo := method(path, File open(path) write(serialized) close)
List2D serializeFrom := method(path, with(doFile(path)))

l serializeTo("list.io")
m := List2D serializeFrom("list.io")

l println
m println
