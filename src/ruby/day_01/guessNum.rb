correct = false
pre_num = rand(10)
puts "The chosen number is #{pre_num}"

while not correct
	puts "Guess one number between 0 and 9: "
	num = gets.to_i
	if num < pre_num
		puts "The input number is smaller than the chosen number."
	elsif num > pre_num
		puts "The input number is larger than the chosen number."
	else
		puts "You're right. The chosen number is #{num}"
		correct = true
	end
end
