class Tree
	attr_accessor :children, :node_name

	def initialize(hash)
		@node_name = hash.keys.first
		@children = []
		hash[@node_name].each {|k, v| @children << Tree.new(k => v)}
	end

	def visit_all(&block)
		visit &block
		children.each {|c| c.visit_all &block}
	end

	def visit(&block)
		block.call self
	end
end

my_hash = {'grandpa' => {'dad' => {'child 1' => {}, 'child 2' => {}}, 'uncle' => {'child 3' => {}, 'child 4' => {}}}}

ruby_tree = Tree.new(my_hash)

puts "Visiting a node"
ruby_tree.visit {|node| puts node.node_name}
puts

puts "Visiting entire tree"
ruby_tree.visit_all {|node| puts node.node_name}
