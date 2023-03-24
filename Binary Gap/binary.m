% Convert integer to binary
n = 2323;
binary = dec2bin(n)

% Initialize variables
maxGap = 0;
currentGap = 0;

% Iterate through binary string
for i = 1:length(binary)
    if binary(i) == '0'
        currentGap = currentGap + 1;
    elseif binary(i) == '1'
        % Check if current gap is greater than maximum gap
        if currentGap > maxGap
            maxGap = currentGap;
        end
        % Reset current gap
        currentGap = 0;
    end
end

% Return maximum gap
gap = maxGap
