SD = {
    'SNR Food': {'Earning': 2414,'State':0},
    'Shan': {'Earning':633,'State':5},
    '19Food': {'Earning': 7884,'State':75}
}

total_income = 0
total_withheld = 0
for employer, table in SD.items():
    print(f"{employer}: ${table['Earning']} ${table['State']}")
    total_income += table['Earning']
    total_withheld += table["State"]

print(f"Total income: ${total_income}\t Total withheld: ${total_withheld}")