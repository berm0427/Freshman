<?php
    for($i = $_POST['front']; $i <=$_POST['front']; $i++)
    {
        for($j = 1; $j<= $_POST['back']; $j = $j+1)
	{
		$sum = $i * $j;
		echo "$i X $j = ".$sum."<br>";
        }
    }
?>
