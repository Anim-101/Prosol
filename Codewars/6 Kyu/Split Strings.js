function solution(string)
{
	if(string.length === 0)
	{
		return [];
	}
	else
	{
		if(string.length % 2 === 0)
		{
			return string.match(/../g);
		}
		else
		{
			return string.concat('_').match(/../g);
		}
	}
} 