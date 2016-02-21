class Person(firstName: String) {
	println("Outer constructor")
	def this(firstName: String, lastName: String) {
		this(firstName)
		println("Inner constructor")
	}
	def talk() = println("hi")
}

val bob = new Person("Bob")
println("------")
val bobTate = new Person("Bob", "Tate")

