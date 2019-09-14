function countBy($x, $n) {
    $z = [];
    
    $count = $x;
    
    for($i = 0; $i < $n; $i++)
    {
      $z[$i] =  $count;
      
      $count = $count + $x;
    }

    return $z;
}