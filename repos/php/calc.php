<?php

$f_v = $_POST['front'];
$b_v =  $_POST['back'];

$sum_plus   = $f_v + $b_v;
$sum_minus  = $f_v - $b_v;
$sum_multi  = $f_v * $b_v;
$sum_divide = $f_v / $b_v;

echo "$f_v + $b_v = " .$sum_plus."</br>";
echo "$f_v - $b_v = " .$sum_minus."</br>";
echo "$f_v X $b_v = " .$sum_multi."</br>";
echo "$f_v / $b_v = " .$sum_divide."</br>";
?>
