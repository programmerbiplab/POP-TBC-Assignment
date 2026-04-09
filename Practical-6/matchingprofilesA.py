suspect_profile = []
criminal_profile = []
print("Enter the suspect's DNA profile (10 values):")

for i in range(10):
    value = float(input(f"Enter value {i + 1}: "))
    suspect_profile.append(value)
print("\nEnter the criminal's DNA profile (10 values):")

for i in range(10):
    value = float(input(f"Enter value {i + 1}: "))
    criminal_profile.append(value)

if suspect_profile == criminal_profile:
    print("\nDNA profiles match.")
    print("The suspect is a convicted criminal.")
else:
    print("\nDNA profiles do not match.")
    print("The suspect is not a convicted criminal.")

#Biplab P. Gajurel 25024641