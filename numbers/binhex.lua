binary = {}
hex = {}
i = 1
h = 0

io.write("input a number: ")
b = tostring(io.read("n"))


for str in string.gmatch(b, ".") do
	table.insert(binary, str)
end


for bindex=#binary, 1, -1 do
	binary[bindex] = binary[bindex] * i
	i = i * 2
	if i > 8 then
		i = 1
	end
end


i = 1
for dindex in pairs(binary) do
	h = h + binary[dindex]
	i = i + 1
	if i == #binary + 1 or i == 5 then
		table.insert(hex, h)
		i = 1
		h = 0
	end
end


for x in pairs(hex) do
	if hex[x] > 9 then
		if hex[x] == 10 then
			hex[x] = 'a'
		end

		if hex[x] == 11 then
			hex[x] = 'b'
		end

		if hex[x] == 12 then
			hex[x] = 'c'
		end

		if hex[x] == 13 then
			hex[x] = 'd'
		end

		if hex[x] == 14 then
			hex[x] = 'e'
		end

		if hex[x] == 15 then
			hex[x] = 'f'
		end
	end
end


io.write(b .. " " .. "in hexadecimal: " .. " ")
for xindex in pairs(hex) do
	io.write(hex[xindex])
end

io.write("\n")

