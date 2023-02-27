<html>
<head>
<title>PHP Program To find the Sum of digits of given number</title>
</head>
<body>
<form method="post">
<table border="0">
<tr>
<td> <input type="text" name="num" value="" placeholder="Enter a number"/> </td>
</tr>
<tr>
<td> <input type="submit" name="submit" value="Submit"/> </td>
</tr>
</table>
</form>
<?php
if(isset($_POST['submit']))
{
$n = $_POST[ 'num'];
$x = $n;
$r = 0;
$sum = 0;
while($n>1)
{
$r = $n%10;
$sum = $sum+$r;
$n = $n/10;
}
echo "Sum of digits of given number ". $x . " is: " .$sum;
return 0;

}
?>
</body>
</html>