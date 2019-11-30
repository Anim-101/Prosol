unction sumDigits(number) {
 
    var sum = 0;

    if(number < 0)
    {
        number = 0 - number;
    }

    while(number != 0)
    {
        if(number < 10)
        {
            sum = sum + number;

            break;
        }
        else
        {
            var val = number % 10;

            sum = sum + val;

            number = number - val;

            number = number / 10;
        }
    }

    return sum;
}