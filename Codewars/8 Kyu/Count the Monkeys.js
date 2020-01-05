function monkeyCount(n)
{
	var array = new Array();
	
	var i = 0;
	
	while(i < n)
	{
		array[i] = i + 1;
		
		i++;
	}
	
	return array;
}