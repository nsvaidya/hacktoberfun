<?php
if ($_SERVER["REQUEST_METHOD"]=="GET") 
{
	if (isset($_GET["id"])) 
	{
		settype($_GET["id"],"integer");
		$r=$_GET["id"];
		if ($r % 2 == 0) 
		{
			print "The number you entered is even";
		}
		else
		{
			print "The number you entered is odd";
		}
	}
	else
	{
		print "Please pass value in id parameter";
	}
}
else
{
	print "Only GET method is allowed";
}
?>