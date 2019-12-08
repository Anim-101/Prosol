function array_diff(a, b)
{
	var array = [];
	
	var i = 0, j = 0, k = 0;
	
	while(i < a.length)
	{
		j = 0;
		
		while(j < b.length)
		{
			if(a[i] == b[j])
			{
				break;
			}
			
			j++;
		}
		
		if(j == b.length)
		{
			array[k++] = a[i];
		}
		
		i++
	}
	
	array.length = k;
	
	return array;
}