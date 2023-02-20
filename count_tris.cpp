#include <iostream>
#include <tiny_stl.hpp>

int main(int argc, char **argv)
{
	// Get path to .stl file
	if (argc != 2)
	{
		std::cout << "Expected arguments: mesh.stl" << std::endl;
		return 0;
	}
	char *filepath = argv[1];

	// Create reader
	auto reader = Tiny_STL::create_reader(filepath);

	// Read triangles one by one and count them
	Tiny_STL::Triangle t;
	int num_tris = 0;
	while (reader->read_next_triangle(&t))
		num_tris++;

	std::cout << "Number of Triangles = " << num_tris << std::endl;
	return 0;
}
