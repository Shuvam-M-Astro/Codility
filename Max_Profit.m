
%Write a function in MATLAB,

%that, given an array A consisting of N integers containing daily prices of a stock share 
%for a period of N consecutive days, returns the maximum possible profit from one transaction 
%during this period. The function should return 0 if it was impossible to gain any profit.





A = [23171 21011 21123 21366 21013 21367]

n = length(A);
if n < 2
    max_profit = 0; % there must be at least 2 prices to make a transaction
    return;
end
min_price = A(1);
max_profit = 0;
for i = 2:n
    profit = A(i) - min_price;
    if profit > max_profit
        max_profit = profit;
    end
    if A(i) < min_price
        min_price = A(i);
    end
end

max_profit

