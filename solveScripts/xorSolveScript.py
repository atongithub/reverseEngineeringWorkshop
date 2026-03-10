key = 0x23
data = b"pJNSOF|k"+ (0x5171136b).to_bytes(4, "little")
print(bytes(b ^ key for b in data))
