class Person(val name: String)

trait Nice {
	def great() = println("Howdily doodily.")
}

class Character(override val name: String) extends Person(name) with Nice

val flanders = new Character("Ned")
flanders.great
