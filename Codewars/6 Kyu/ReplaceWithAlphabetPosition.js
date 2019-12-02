function alphabetPosition(text)
{
	var replyText = "";
	
	var count = 0;
	
	for(var i = 0; i < text.length; i++)
	{
		var value = text.charCodeAt(i);
		
		
		if((value >= 65) && (value <= 90))
		{
			if(count == 0)
			{
				replyText += value - 64;
			}
			else
			{
				replyText += " ";
				
				replyText += value - 64;
			}
			
			count = 1;
		}
		else if((value >= 97) && (value <= 122))
		{
			if(count == 0)
			{
				replyText += value - 96;
			}
			else
			{
				replyText += " ";
				
				replyText += value - 96;
			}
			
			count = 1;
		}
	}
	
	return replyText;
}