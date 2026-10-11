import qrcode
url = input("enter your url").strip()
file_path = "C:\\Users\\Admin\\DataStructuresAndAlgorithmns"

qr = qrcode.QRCode()
qr.add_data(url)

image = qr.make_image()
image.save(file_path)

print("qr code generated")