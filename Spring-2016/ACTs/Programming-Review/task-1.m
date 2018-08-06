matrix = load('Example1.txt');

location = input('Please input the location of the number of interest:');

while ((location(1) > 3) || (location(2) > 3))
    printf('Error: location is outside bounds.')
    location = input('Please input a new location of the number of interest:');
end

matrix(location(1),location(2)) = input('Please input the new number.');

fopen('newfile.txt', 'r+');

fwrite('newfile.txt', matrix);

fclose('newfile.txt');