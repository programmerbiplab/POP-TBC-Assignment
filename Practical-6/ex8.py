def matchingProfiles(profile1, profile2):
    # Comparing eacb element
    for i in range(10):
        if profile1[i] != profile2[i]:
            return False
    return True

suspect_profile = []
criminal_profile = []

print("Enter suspect DNA profile (10 values):")
for i in range(10):
    num = float(input("Enter value: "))
    suspect_profile.append(num)

print("\nENter criminal DNA profile (10 values):")
for i in range(10):
    num = float(input("Enter value: "))
    criminal_profile.append(num)
result = matchingProfiles(suspect_profile, criminal_profile)

if result == True:
    print("\nDNA profiles match.")
    print("The suspect is a repeated offender.")
else:
    print("\nDNA profiles do not match.")
    print("The suspect is NOT a repeated offender.")

#Biplab P. Gajurel 25024641