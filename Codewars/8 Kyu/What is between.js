function between(a, b)
{
	var i = a;
	
	var j = b;
	
	var array = new Array();
	
	var k = 0;
	
	while(i <= j)
	{
		array[k++] = i++;
	}
	
	return array;
}