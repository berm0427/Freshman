<?php
$id = $_POST['id'];
$pw = $_POST['pw'];

if($id == 'admin' && $pw == 'admin')
{
 	for($i = 2; $i <=9; $i++)
    	{
        	for($j = 1; $j<= 9; $j = $j+1)
        	{
                	$sum = $i * $j;
                	echo "$i X $j = ".$sum."<br>";
        	}
    	}	
}
else
{
	echo "나가!";
}
?>
