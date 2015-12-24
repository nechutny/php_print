# php_print

Print a document from PHP in Linux. Printer PECL extension works on Windows only, this is the solution for Unix.

#What it is?

This is a PHP native extension. That means that you need to load it via "extension=php_print.so" in php.ini, or via function call "dl('php_print.so')" in runtime.

It can send documents (as txt files, pdf and others) to printer. Formats are not fully tested yet, but basic plain text files and PDFs work.

This extension is just a thin wrapper for CUPS library.


# How to

1) Install PHP-CPP

		http://www.php-cpp.com/documentation/install

2) Install cups libraries

		sudo yum install cups-devel

3) make

4) sudo make install

5) use from php

		<?php
		print_file('document.pdf');
		?>

# Tested

Works on Fedora 21 with PHP 5.6 and any printer supported by CUPS.
