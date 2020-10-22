def encode(string):
    
    returnString = ''
    
    for str in string:
        
        if str == 'a':
            returnString += '1'
        elif str == 'e':
            returnString += '2'
        elif str == 'i':
            returnString += '3'
        elif str == 'o':
            returnString += '4'
        elif str == 'u':
            returnString += '5'
        else:
            returnString += str
    
    return returnString
    
def decode(string):
    
    returnString = ''
    
    for str in string:
        
        if str == '1':
            returnString += 'a'
        elif str == '2':
            returnString += 'e'
        elif str == '3':
            returnString += 'i'
        elif str == '4':
            returnString += 'o'
        elif str == '5':
            returnString += 'u'
        else:
            returnString += str
    
    return returnString
    return