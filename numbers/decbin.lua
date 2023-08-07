decimal = {0, 0, 0};

for dindex in pairs(decimal) do
	io.write("input a number: ")
	d = io.read("n")
	decimal[dindex] = d
end

for dindex in pairs(decimal) do

	io.write(decimal[dindex] .. " in binary is: ")
	while decimal[dindex] > 0.9 do
		io.write(math.floor(decimal[dindex] % 2))
		decimal[dindex] = decimal[dindex] / 2
	end
	io.write("\n")
end

