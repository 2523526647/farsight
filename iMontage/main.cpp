#include <TraceObject.h>
#include <string>

int main(int argc, char* argv[])
{
	TraceObject* tobj = new TraceObject();
	
	if (argc < 2)
	{
		std::cout << "Must run program with correct number of arguments" << std::endl;
		return -1;
	}
	
	char* xml_file = argv[1];
	std::cout << "Reading XML file: " << xml_file << std::endl;
	
	tobj->ReadFromSWCFile(xml_file);

}