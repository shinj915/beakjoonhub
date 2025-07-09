subject = input()

digital_humanities = ['social', 'history', 'language', 'literacy']
public_bigdata = ['bigdata', 'public', 'society']

for i in digital_humanities:
    if i in subject:
        print('digital humanities')
        exit(0)

for i in public_bigdata:
    if i in subject:
        print('public bigdata')