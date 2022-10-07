# Equipe (nomes)
our $dynamic = 'outside';
my  $static  = 'outside';

sub show {
  print "\tin sub: dynamic $dynamic\n";
  print "\tin sub: static  $static\n";
  print"\n";
}

{
  local $dynamic = 'inside';
  my    $static = 'inside';

  print "In block\n";
  print "\tinline: dynamic $dynamic\n";
  print "\tinline: static  $static\n";
  show();
}

print "In main\n";
print "\tinline: dynamic $dynamic\n";
print "\tinline: static  $static\n";
show();
# Código para a questão 1

 
