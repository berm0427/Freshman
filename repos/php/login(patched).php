<?php
$id = $_POST['id'];
$pw = $_POST['pw'];

if($id == 'admin' && $pw == 'admin')
{
	echo "<script>location.href='gugu.php'</script>";
}
else
{
	echo "나가!";
}
?>
