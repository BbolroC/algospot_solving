Human := Object clone do(
	age ::= nil
)

peter := Human clone setAge(21)
peter age println


code := method("this code just prints this string" println)
invokeByName := method(name, self getSlot(name) call)

invokeByName("code")

(1 + 1) println
e := try(1 + "one")

e catch(Exception, 
	"Io is strongly typed, or at least doesn't convert numbers into strings automatically" println
)
