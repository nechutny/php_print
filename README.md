# php_print

Print document from PHP in Linux. Printer PECL extension works only on Windows, this is solution for unixs.

#What it is?

This is PHP native extension. It mean, that you need to load it via "extension=php_print.so" in php.ini, or via function call "dl('php_print.so')" in runtime.

It can send to printer documents as txt files, pdf and so. Formats are not fully tested yet, but basic plain text files and PDF are working.

This extension is just thin wrapper on CUPS library - https://www.cups.org/.


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
