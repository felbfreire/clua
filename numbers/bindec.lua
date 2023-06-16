binary = {0, 0, 0};
power, base = 0, 2;
decimal = 0;

for bindex in pairs(binary) do
	io.write("input a number: ")
	b = io.read("n")
	binary[bindex] = b
end

for bindex=#binary, 0, -1 do
	if binary[bindex] == nil then
		break	
	end
	power_result = (base^power) * binary[bindex]
	decimal = decimal + power_result
	power = power + 1
end
 
print("decimal is " .. decimal)
