binary = {1, 1, 1};

decimal = 0;
i = 0;

for b in pairs(binary) do
	decimal = decimal + (2^i * binary[b])
	i = i + 1
end

print("decimal is: " .. decimal)
