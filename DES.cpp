#include <iostream>
#include<string>
#ifdef __GNUC__
#define __rdtsc __builtin_ia32_rdtsc
#else
#include<intrin.h>
#endif // !__GNUC__

using namespace std;

void initialPermutation(bool(*arr)[8], bool(*result)[8])
{
	int IP[8][8] = 
	{ 
		{58,50,42,34,26,18,10,2},
		{60,52,44,36,28,20,12,4},
		{62,54,46,38,30,22,14,6},
		{64,56,48,40,32,24,16,8},
		{57,49,41,33,25,17,9,1},
		{59,51,43,35,27,19,11,3},
		{61,53,45,37,29,21,13,5},
		{63,55,47,39,31,23,15,7} 
	};
	int row, colomn;
	for (int i = 0; i < 8; i++)
	{
		
		for (int j = 0; j < 8; j++)

		{
			colomn = ((IP[i][j]) % 8) - 1;
			if (colomn == -1)
			{
				colomn = 7;
			}
			//cout << colomn;
			row = (IP[i][j]) / 8;
			if (colomn == 7)
			{
				row--;
			}
			//cout << row;
			//cout << " ";
			result[i][j] = arr[row][colomn];

		}
	}
}
void Expansion(bool(*arr)[4], bool(*result)[6])
{
	int EP[8][6] =
	{
		{32,1,2,3,4,5},
		{4,5,6,7,8,9},
		{8,9,10,11,12,13},
		{12,13,14,15,16,17},
		{16,17,18,19,20,21},
		{20,21,22,23,24,25},
		{24,25,26,27,28,29},
		{28,29,30,31,32,1},

	};
	/*result[0][0] = arr[7][3];
	result[0][1] = arr[0][0];
	result[0][2] = arr[0][1];
	result[0][3] = arr[0][2];
	result[0][4] = arr[0][3];
	result[0][5] = arr[1][0];
	

	result[1][0] = arr[0][3];
	result[1][1] = arr[1][0];
	result[1][2] = arr[1][1];
	result[1][3] = arr[1][2];
	result[1][4] = arr[1][3];
	result[1][5] = arr[2][0];

	result[2][0] = arr[1][3];
	result[2][1] = arr[2][0];
	result[2][2] = arr[2][1];
	result[2][3] = arr[2][2];
	result[2][4] = arr[2][3];
	result[2][5] = arr[3][0];

	result[3][0] = arr[2][3];
	result[3][1] = arr[3][0];
	result[3][2] = arr[3][1];
	result[3][3] = arr[3][2];
	result[3][4] = arr[3][3];
	result[3][5] = arr[4][0];

	result[4][0] = arr[3][3];
	result[4][1] = arr[4][0];
	result[4][2] = arr[4][1];
	result[4][3] = arr[4][2];
	result[4][4] = arr[4][3];
	result[4][5] = arr[5][0];

	result[5][0] = arr[4][3];
	result[5][1] = arr[5][0];
	result[5][2] = arr[5][1];
	result[5][3] = arr[5][2];
	result[5][4] = arr[5][3];
	result[5][5] = arr[6][0];


	result[6][0] = arr[5][3];
	result[6][1] = arr[6][0];
	result[6][2] = arr[6][1];
	result[6][3] = arr[6][2];
	result[6][4] = arr[6][3];
	result[6][5] = arr[7][0];

	result[7][0] = arr[6][3];
	result[7][1] = arr[7][0];
	result[7][2] = arr[7][1];
	result[7][3] = arr[7][2];
	result[7][4] = arr[7][3];
	result[7][5] = arr[0][0];

	*/
	int row=0, colomn=0;
	for (int i = 0; i < 8; i++)
	{

		for (int j = 0; j < 6; j++)
		{
			colomn = ((EP[i][j]) % 4) - 1;
			if (colomn == -1)
			{
				colomn = 3;
			}
			//cout << colomn;
			row = (EP[i][j]) / 4;
			if (colomn == 3)
			{
				row--;
			}
			//cout << row;
			//cout << " ";
			result[i][j] = arr[row][colomn];
			//cout << result[i][j];

		}
		//cout << endl;
	}
}
void finalPermutation(bool(*arr)[8], bool(*result)[8])
{
	int IIP[8][8] =
	{
		{40,8,48,16,56,24,64,32},
		{39,7,47,15,55,23,63,31},
		{38,6,46,14,54,22,62,30},
		{37,5,45,13,53,21,61,29},
		{36,4,44,12,52,20,60,28},
		{35,3,43,11,51,19,59,27},
		{34,2,42,10,50,18,58,26},
		{33,1,41,9,49,17,57,25}

	};
	int row, colomn;
	for (int i = 0; i < 8; i++)
	{

		for (int j = 0; j < 8; j++)

		{
			colomn = ((IIP[i][j]) % 8) - 1;
			if (colomn == -1)
			{
				colomn = 7;
			}
			//cout << colomn;
			row = (IIP[i][j]) / 8;
			if (colomn == 7)
			{
				row--;
			}
			//cout << row;
			//cout << " ";
			result[i][j] = arr[row][colomn];
			//cout << result[i][j];
		}
		//cout << endl;
	}

}
void Permutation(bool(*arr)[4], bool(*result)[4])
{
	int P[8][4] =
	{
		{16,7,20,21},
		{29,12,28,17},
		{1,15,23,26},
		{5,18,31,10},
		{2,8,24,14},
		{32,27,3,9},
		{19,13,30,6},
		{22,11,4,25},

	};
	int row, colomn;
	for (int i = 0; i < 8; i++)
	{

		for (int j = 0; j < 4; j++)

		{
			colomn = ((P[i][j]) % 4) - 1;
			if (colomn == -1)
			{
				colomn = 3;
			}
			//cout << colomn;
			row = (P[i][j]) / 4;
			if (colomn == 3)
			{
				row--;
			}
			//cout << row;
			//cout << " ";
			result[i][j] = arr[row][colomn];
			//cout << result[i][j];

		}
		//cout << endl;
	}
	

}
void permutationChoice1(bool(*arr)[8], bool(*result)[7])
{
	int PC1[8][7] =
	{
		{57,49,41,33,25,17,9},
		{1,58,50,42,34,26,18},
		{10,2,59,51,43,35,27},
		{19,11,3,60,52,44,36},
		{63,55,47,39,31,23,15},
		{7,62,54,46,38,30,22},
		{14,6,61,53,45,37,29},
		{21,13,5,28,20,12,4},

	};
	int row, colomn;
	
	for (int i = 0; i < 8; i++)
	{

		for (int j = 0; j < 7; j++)

		{
			colomn = ((PC1[i][j]) % 8) - 1;
			if (colomn == -1)
			{
				colomn = 7;
			}
			//cout << colomn;
			row = (PC1[i][j]) / 8;
			if (colomn == 7)
			{
				row--;
			}
			//cout << row;
			//cout << " ";
			result[i][j] = arr[row][colomn];
	
			//cout << result[i][j];
		}
		//cout << endl;
	}

}
void Copy2(bool(*L)[7], bool(*R)[7]);

void leftCircularShift(bool(*arr)[7], bool(*result)[7],int round)
{
	int arr_colomn = 1;
	int arr_row = 0;
	int shiftBits[16] = {1,1,2,2,2,2,2,2,1,2,2,2,2,2,2,1};
	int x = shiftBits[round];
	while (x != 0)
	{
		arr_colomn = 1;
		arr_row = 0;
		//cout <<round<<":"<< x<<":"<<endl;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				//cout << arr_colomn << arr_row << " ";
				if ((i == 3) && (j == 6))
				{
					result[i][j] = arr[0][0];
				}
				else if ((i == 7) && (j == 6))
				{
					result[i][j] = arr[4][0];
				}
				else
				{
					result[i][j] = arr[arr_row][arr_colomn];
				}
				arr_colomn++;
				if (arr_colomn == 7)
				{
					arr_colomn = 0;
					arr_row++;
				}
				//cout << result[i][j];

			}
			//cout << endl;
		}
		Copy2(arr,result);
		x--;
	}
}
void permutationChoice2(bool(*arr)[7], bool(*result)[6])
{

	int PC2[8][6] =
	{
		{14,17,11,24,1,5},
		{3,28,15,6,21,10},
		{23,19,12,4,26,8},
		{16,7,27,20,13,2},
		{41,52,31,37,47,55},
		{30,40,51,45,33,48},
		{44,49,39,56,34,53},
		{46,42,50,36,29,32}
	};
	int row, colomn;
	/*static int count = 0;
	cout << "PC2:"<<count << endl;
	count++;*/
	for (int i = 0; i < 8; i++)
	{
	
		for (int j = 0; j < 6; j++)

		{
			colomn = ((PC2[i][j]) % 7) - 1;
			if (colomn == -1)
			{
				colomn = 6;
			}
			//cout << colomn;
			row = (PC2[i][j]) / 7;
			if (colomn == 6)
			{
				row--;
			}
			//cout << row;
			//cout << " ";
			result[i][j] = arr[row][colomn];
			//cout << result[i][j];


		}
		//cout << endl;
	}
}
void  XOR_fourColomns(bool(*arr1)[4], bool(*arr2)[4], bool(*result)[4])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if ((!(arr1[i][j] && arr2[i][j])) && ((arr2[i][j]) || (arr1[i][j])))
			{
				result[i][j] = true;
			}
			else
			{
				result[i][j] = false;
			}
			//cout << result[i][j];
		}
		//cout << endl;
	}

}
void XOR_sixColomns(bool(*arr1)[6], bool(*arr2)[6], bool(*result)[6])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if ((!(arr1[i][j] && arr2[i][j])) && ((arr2[i][j])||(arr1[i][j])))
			{
				result[i][j] = true;
			}
			else
			{
				result[i][j] = false;
			}
			//cout << result[i][j];
		}
		//cout << endl;
	}

}
void Sbox(bool(*arr)[6], bool(*result_binary)[4])
{
	int result_decimal[8];
	int S1[4][16] =
	{
		{14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7},
		{0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8},
		{4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0},
		{15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13}
	};
	int S2[4][16] =
	{
		{15,1,8,14,6,11,3,4,9,7,2,13,12,0,5,10},
		{3,13,4,7,15,2,8,14,12,0,1,10,6,9,11,5},
		{0,14,7,11,10,4,13,1,5,8,12,6,9,3,2,15},
		{13,8,10,1,3,15,4,2,11,6,7,12,0,5,14,9}
	};
	int S3[4][16] =
	{
		{10,0,9,14,6,3,15,5,1,13,12,7,11,4,2,8},
		{13,7,0,9,3,4,6,10,2,8,5,14,12,11,15,1},
		{13,6,4,9,8,15,3,0,11,1,2,12,5,10,14,7},
		{1,10,13,0,6,9,8,7,4,15,14,3,11,5,2,12}
	};
	int S4[4][16] =
	{
		{7,13,14,3,0,6,9,10,1,2,8,5,11,12,4,15},
		{13,8,11,5,6,15,0,3,4,7,2,12,1,10,14,9},
		{10,6,9,0,12,11,7,13,15,1,3,14,5,2,8,4},
		{3,15,0,6,10,1,13,8,9,4,5,11,12,7,2,14}
	};
	int S5[4][16] =
	{
		{2,12,4,1,7,10,11,6,8,5,3,15,13,0,14,9},
		{14,11,2,12,4,7,13,1,5,0,15,10,3,9,8,6},
		{4,2,1,11,10,13,7,8,15,9,12,5,6,3,0,14},
		{11,8,12,7,1,14,2,13,6,15,0,9,10,4,5,3}
	};
	int S6[4][16] =
	{
		{12,1,10,15,9,2,6,8,0,13,3,4,14,7,5,11},
		{10,15,4,2,7,12,9,5,6,1,13,14,0,11,3,8},
		{9,14,15,5,2,8,12,3,7,0,4,10,1,13,11,6},
		{4,3,2,12,9,5,15,10,11,14,1,7,6,0,8,13}
	};
	int S7[4][16] =
	{
		{4,11,2,14,15,0,8,13,3,12,9,7,5,10,6,1},
		{13,0,11,7,4,9,1,10,14,3,5,12,2,15,8,6},
		{1,4,11,13,12,3,7,14,10,15,6,8,0,5,9,2},
		{6,11,13,8,1,4,10,7,9,5,0,15,14,2,3,12}
	};
	int S8[4][16] =
	{
		{13,2,8,4,6,15,11,1,10,9,3,14,5,0,12,7},
		{1,15,13,8,10,3,7,4,12,5,6,11,0,14,9,2},
		{7,11,4,1,9,12,14,2,0,6,10,13,15,3,5,8},
		{2,1,14,7,4,10,8,13,15,12,9,0,3,5,6,11}
	};
	int sbox_colomn = 0;
	int sbox_row = 0;
	int(*sbox)[16]=S1;
	for (int i = 0; i < 8; i++)
	{
		switch (i)
		{
		case 0:
			sbox = S1;
			break;
		case 1:
			sbox = S2;
			break;
		case 2: 
			sbox = S3;
			break;
		case 3:
			sbox = S4;
			break;
		case 4:
			sbox = S5;
			break;
		case 5:
			sbox = S6;
			break;
		case 6: 
			sbox = S7;
			break;
		case 7:
			sbox = S8;
			break;
		}
		sbox_row= (arr[i][0]*2 )+ (arr[i][5]*1);
		sbox_colomn = (arr[i][1]*8) + (arr[i][2]*4) +( arr[i][3]*2) + (arr[i][4]*1);
		result_decimal[i]= sbox[sbox_row][sbox_colomn];
		/*cout <<result_decimal[i];
		cout << endl;*/
	}	
	int powersOfTwo_arr[4] = { 8,4,2,1 };
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			result_binary[i][j] = result_decimal[i] / powersOfTwo_arr[j];
			if (result_decimal[i] / powersOfTwo_arr[j])
			{
				result_decimal[i] -= powersOfTwo_arr[j];
			}
			//cout << result_binary[i][j];
		}
		//cout << endl;
	}


}

void stringToArray(string s, bool(*arr)[8])
{
	int charcters_index = 0;
	int ascii_dec = s[charcters_index];
	int ascii_symbol = 0;
	int qoutient = 0;
	int powersoftwo[4] = { 8,4,2,1 };
	for (int i = 0; i <8; i++)
	{
		ascii_dec = s[charcters_index];
		if (ascii_dec >= 48 && ascii_dec <= 57)
		{
			ascii_symbol = ascii_dec - 48;
		}
		if (ascii_dec >= 65 && ascii_dec <= 70)
		{
			ascii_symbol = ascii_dec - 65 + 10;
		}
		//cout << ascii_symbol << endl;
		for (int j = 0; j < 4; j++)
		{

			qoutient=ascii_symbol / powersoftwo[j];
			
			if (qoutient != 0)
			{
				arr[i][j] = 1;
				ascii_symbol -= powersoftwo[j];
			}
			else
			{
				arr[i][j] = 0;
			}
			//cout << arr[i][j];
		}
		//cout << endl;
		charcters_index++;
		 ascii_dec = s[charcters_index];
		if (ascii_dec >= 48 && ascii_dec <= 57)
		{
			ascii_symbol = ascii_dec - 48;
		}
		if (ascii_dec >= 65 && ascii_dec <= 70)
		{
			ascii_symbol = ascii_dec - 65 + 10;
		}
		//cout << ascii_symbol << endl;

		for (int k = 4; k < 8; k++)
		{
			qoutient = ascii_symbol / powersoftwo[k-4];

			if (qoutient != 0)
			{
				arr[i][k] = 1;
				ascii_symbol -=powersoftwo[k - 4];
			}
			else
			{
				arr[i][k] = 0;
			}
			//cout << arr[i][k];
		}
		charcters_index++;
		//cout << endl;
	}
}
void Swap(bool(*L)[4], bool(*R)[4])
{
	bool temp = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			temp = L[i][j];
			L[i][j] = R[i][j];
			R[i][j] = temp;
		}
	}
}
void Copy(bool(*L)[4], bool(*R)[4])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			L[i][j] = R[i][j];

		}
	}
}
void Copy2(bool(*L)[7], bool(*R)[7])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			L[i][j] = R[i][j];

		}
	}
}
string arrayToHex(bool(*arr)[8])
{
	string S;
	int first = 0;
	char x = 'a';
	int powersOfx = 8;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)

		{

			first += (arr[i][j] * powersOfx);
			/*cout << ":" << first;
			cout << "::" << powersOfx;
			cout << ":::" << arr[i][j] << endl;*/
			if ((j == 3) || (j == 7))
			{
				//cout << first << endl;
				x = first + '0';
				switch (first)
				{
				case 10:
					x = 'A';
					break;
				case 11:
					x = 'B';
					break;
				case 12:
					x = 'C';
					break;
				case 13:
					x = 'D';
					break;
				case 14:
					x = 'E';
					break;
				case 15:
					x = 'F';
					break;
				default:
					x = x;
					break;
				}

				S += x;
				powersOfx = 8;
				first = 0;
			}
			else
			{
				powersOfx /= 2;

			}
		}
	}
	return S;
}
void Encrypt(bool(*data_arr)[8], bool(*key_arr)[8])
{
	long long t1 = __rdtsc();
	int round_count = 0;
	bool IPOutput[8][8];
	bool ExpansionOutput[8][6];
	bool PC1Output[8][7];
	bool circularShiftOutput[8][7];
	bool PC2Output[8][6];
	bool firstXOROutput[8][6];
	bool R[8][4];
	bool L[8][4];
	int IPOutput_colomn = 0;
	int IPOutput_row = 0;
	bool SBoxOutput[8][4];
	bool PermutationOutput[8][4];
	bool secondXOROutput[8][4];
	bool finalPermutationResult[8][8];


	permutationChoice1(key_arr, PC1Output);
	initialPermutation(data_arr, IPOutput);


	/*for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{


			cout << data_arr[i][j];
		}
		cout << endl;
	}*/
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			L[i][j] = IPOutput[IPOutput_row][IPOutput_colomn];
			IPOutput_colomn++;
			if (IPOutput_colomn == 8)
			{
				IPOutput_colomn = 0;
				IPOutput_row++;
			}
			//cout << L[i][j];
		}
		//cout << endl;
	}
	IPOutput_colomn = 0;
	IPOutput_row = 4;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			R[i][j] = IPOutput[IPOutput_row][IPOutput_colomn];
			IPOutput_colomn++;
			if (IPOutput_colomn == 8)
			{
				IPOutput_colomn = 0;
				IPOutput_row++;
			}
			//cout << R[i][j];
		}
		//cout << endl;
	}
	while (round_count < 16)
	{
		
		

		leftCircularShift(PC1Output, circularShiftOutput, round_count);
		permutationChoice2(circularShiftOutput, PC2Output);

		Expansion(R, ExpansionOutput);
		XOR_sixColomns(PC2Output, ExpansionOutput, firstXOROutput);
		Sbox(firstXOROutput, SBoxOutput);
		Permutation(SBoxOutput, PermutationOutput);

		XOR_fourColomns(PermutationOutput, L, secondXOROutput);
		/*cout << endl <<round_count << ":" << endl;
		cout << "R:" << endl;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << R[i][j];
			}
			
		}
		cout << endl;
		cout << "L:" << endl;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << L[i][j];
			}
			cout << endl;
		}
		cout << endl;
		cout << " circularShiftOutput:" << endl;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				cout << circularShiftOutput[i][j];
			}
			cout << endl;
		}
		cout << endl;
		cout << " PC2Output:" << endl;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				cout << PC2Output[i][j];
			}
			
		}
		cout << endl;
		cout << "ExpansionOutput:" << endl;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				cout << ExpansionOutput[i][j];
			}
			
		}
		cout << endl;
		cout << "firstXOROutput:" << endl;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				cout << firstXOROutput[i][j];
			}
		}
		cout << endl;
		cout << " SBoxOutput:" << endl;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << SBoxOutput[i][j];
			}
			
		}
		cout << endl;
		cout << " PermutationOutput:" << endl;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << PermutationOutput[i][j];
			}
			
		}
		cout << endl;
		cout << " secondXOROutput:" << endl;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << secondXOROutput[i][j];
			}
			
		}*/



		//PC1Output=CircularShiftOutput
		Copy2(PC1Output, circularShiftOutput);
		//L1=R0
		Copy(L, R);
		//R1=secondXorO/P
		Copy(R, secondXOROutput);
	

		round_count++;
	}
	Swap(L, R);
	bool swapResult[8][8];
	int row = 0;
	int colomn = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{

			swapResult[i][j] = L[row][colomn];
			colomn++;
			if (colomn == 4)
			{
				colomn = 0;
				row++;
			}
		}
	}
	row = 0; colomn = 0;
	for (int i = 4; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{

			swapResult[i][j] = R[row][colomn];
			colomn++;
			if (colomn == 4)
			{
				colomn = 0;
				row++;
			}
		}
	}

	finalPermutation(swapResult, finalPermutationResult);
	long long t2 = __rdtsc();
	cout <<"cipher: " <<arrayToHex(finalPermutationResult) << endl;
	printf("cycles: %lld", t2 - t1);

}
void Decrypt(bool(*data_arr)[8], bool(*key_arr)[8])
{
	int round_count = 0;
	bool IPOutput[8][8];
	bool ExpansionOutput[8][6];
	bool PC1Output[8][7];
	bool PC2Output[8][6];
	bool firstXOROutput[8][6];
	bool R[8][4];
	bool L[8][4];
	int IPOutput_colomn = 0;
	int IPOutput_row = 0;
	bool SBoxOutput[8][4];
	bool PermutationOutput[8][4];
	bool secondXOROutput[8][4];
	bool finalPermutationResult[8][8];


	permutationChoice1(key_arr, PC1Output);
	initialPermutation(data_arr, IPOutput);


	bool key_round[16][8][7];
	int round = 0;
	while(round<16)
	{
		leftCircularShift(PC1Output, key_round[round], round);
		Copy2(PC1Output, key_round[round]);
		round++;
	}
	round--;
	
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			L[i][j] = IPOutput[IPOutput_row][IPOutput_colomn];
			IPOutput_colomn++;
			if (IPOutput_colomn == 8)
			{
				IPOutput_colomn = 0;
				IPOutput_row++;
			}
			//cout << L[i][j];
		}
		//cout << endl;
	}
	IPOutput_colomn = 0;
	IPOutput_row = 4;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			R[i][j] = IPOutput[IPOutput_row][IPOutput_colomn];
			IPOutput_colomn++;
			if (IPOutput_colomn == 8)
			{
				IPOutput_colomn = 0;
				IPOutput_row++;
			}
			//cout << R[i][j];
		}
		//cout << endl;
	}
	while (round_count < 16)
	{

		
		permutationChoice2(key_round[round], PC2Output);

		Expansion(R, ExpansionOutput);
		XOR_sixColomns(PC2Output, ExpansionOutput, firstXOROutput);
		Sbox(firstXOROutput, SBoxOutput);
		Permutation(SBoxOutput, PermutationOutput);

		XOR_fourColomns(PermutationOutput, L, secondXOROutput);

	
		//L1=R0
		Copy(L, R);
		//R1=secondXorO/P
		Copy(R, secondXOROutput);

		round_count++;
		round--;
	}
	Swap(L, R);
	bool swapResult[8][8];
	int row = 0;
	int colomn = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{


			swapResult[i][j] = L[row][colomn];


			colomn++;
			if (colomn == 4)
			{
				colomn = 0;
				row++;
			}
		}
	}
	row = 0; colomn = 0;
	for (int i = 4; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{

			swapResult[i][j] = R[row][colomn];
			colomn++;
			if (colomn == 4)
			{
				colomn = 0;
				row++;
			}
		}
	}

	finalPermutation(swapResult, finalPermutationResult);
	cout <<"plain: " <<arrayToHex(finalPermutationResult) << endl;

}
int main(int argc, char** argv)
{
	string operation;
	string data;
	string key;

	operation = argv[1];
	data = argv[2];
	key = argv[3];

	
	/*   cin >> operation;
		cin >> data;
		cin >> key;
	*/
	bool data_arr[8][8];
	bool key_arr[8][8];

	stringToArray(data, data_arr);
	stringToArray(key, key_arr);

	if (operation == "encrypt")
	{
		Encrypt(data_arr, key_arr);

	}
	else if (operation == "decrypt")
	{
		Decrypt(data_arr, key_arr);
	}





}