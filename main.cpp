#include <phpcpp.h>
#include <iostream>
#include <unistd.h>
#include <cups/cups.h>
#include <stdio.h>


Php::Value print_file(Php::Parameters &parameters)
{
	std::string printFile = parameters[0];
	const char* printFileTmp = printFile.c_str();

	cupsPrintFile(cupsGetDefault(), printFileTmp, "PHP Print", 0, NULL);

	return 1;
}




extern "C"
{
	PHPCPP_EXPORT void *get_module()
	{
		// extension info
		static Php::Extension extension("php_print", "1.0");

		// functions
		extension.add("print_file", print_file, {Php::ByVal("fileName", Php::Type::String)});

		return extension;
	}
}
