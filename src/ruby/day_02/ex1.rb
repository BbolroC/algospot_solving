a = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]
result = []
index = 0
a.each do |e|
	result << e
	index += 1
	if index > 3
		p result
		result = []
		index = 0
	end
end


a.each_slice(4) {|e| p e}
