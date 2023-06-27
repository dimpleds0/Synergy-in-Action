--Synergy in Action

--Initializing the Variables
local synergy = 0;

--Function to Calculate the Result
function calculate_synergy()
	for i=1, 10 do
		for j=1, 10 do
			for k=1, 10 do
				synergy = synergy + (i + j + k);
			end
		end
	end
end

--Function to Print the Result
function print_synergy()
	print("Synergy is: "..synergy);
end

--Main Function
function main()
	calculate_synergy();
	print_synergy();
end

--Call Main Function
main();

--Function to Calculate the Result with Parameters
function calculate_synergy_param(a,b,c)
	for i=1, a do
		for j=1, b do
			for k=1, c do
				synergy = synergy + (i + j + k);
			end
		end
	end
end

--Function to Print the Result
function print_synergy_param()
	print("Synergy is: "..synergy);
end

--Main Function with Parameters
function main_param(a,b,c)
	calculate_synergy_param(a,b,c);
	print_synergy_param();
end

--Call Main Function with Parameters
main_param(20,40,60);

--Function to Calculate the Result for Different Variables
function calculate_synergy_diff_var(x,y,z,p)
	for i=1, x do
		for j=1, y do
			for k=1, z do
				for l=1, p do
					synergy = synergy + (i + j + k + l);
				end
			end
		end
	end
end

--Function to Print the Result of Different Variables
function print_synergy_diff_var()
	print("Synergy is: "..synergy);
end

--Main Function of Different Variables
function main_diff_var(x,y,z,p)
	calculate_synergy_diff_var(x,y,z,p);
	print_synergy_diff_var();
end

--Call Main Function of Different Variables
main_diff_var(50,60,70,80);

--Function to Calculate the Result with Multiple Variables
function calculate_synergy_multi_var(x1,x2,x3,x4,x5,x6)
	for i=1, x1 do
		for j=1, x2 do
			for k=1, x3 do
				for l=1, x4 do
					for m=1, x5 do
						for n=1, x6 do
							synergy = synergy + (i + j + k + l + m + n);
						end
					end
				end
			end
		end
	end
end

--Function to Print the Result with Multiple Variables
function print_synergy_multi_var()
	print("Synergy is: "..synergy);
end

--Main Function with Multiple Variables
function main_multi_var(x1,x2,x3,x4,x5,x6)
	calculate_synergy_multi_var(x1,x2,x3,x4,x5,x6);
	print_synergy_multi_var();
end

--Call Main Function with Multiple Variables
main_multi_var(100,200,300,400,500,600);