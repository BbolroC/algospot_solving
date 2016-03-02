def typeof(obj):
	return obj.__class__

def valueof(obj):
	if obj.__class__ == type(obj):
		print(obj.__class__.__name__)
		print(eval(obj.__class__.__name__))
		return eval(obj.__class__.__name__ + '(obj)')

print(typeof(1))
print(valueof(1))

print(typeof(1.1))
print(valueof(1.1))

print(typeof([1, 2]))
print(valueof([1, 2]))

