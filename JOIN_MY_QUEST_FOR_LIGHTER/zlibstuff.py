import zlib

decompressed_data = ""

with open('d4a022fe492ce922588944e1a120bb1e812d32', 'rb') as f:
    compressed_data = f.read()
    # decompressed_data = zlib.decompress(compressed_data)
    decompressed_data = zlib.decompress(compressed_data)

with open("test_decompress.txt", 'w') as l:
    l.write((decompressed_data))
