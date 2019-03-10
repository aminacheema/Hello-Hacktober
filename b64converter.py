import base64

msg = input("message:")

print("original", msg)
print("base64", base64.encode(msg.encode())
