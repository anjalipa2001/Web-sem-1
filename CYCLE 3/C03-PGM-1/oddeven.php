<html>
</head></head>
<title>odd or even</title>
<body>
<form method="GET">
<center><h2>ODD OR EVEN</h2><br>
Enter the Number : 
<input type="text" name="txt"><br><br>
<input type="submit" name="Submit value="submit"><br>
</form>
</body>
</html>
<?php
echo "<br><b><u>Number is Odd or Even</u></b><br>";
$n=$_GET['txt'];
if($n%2==0)
echo "$n is Even";
else
echo "$n is Odd";
?>