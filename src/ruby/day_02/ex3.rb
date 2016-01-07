def my_grep(file_name, exp)
	File.open(file_name) do |f|
		f.each {|line| puts "#{f.lineno}: #{line}" if line[exp]}
	end
end

my_grep('bbolroc.in', 'con')
