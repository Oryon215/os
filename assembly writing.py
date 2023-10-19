# assembly_file = open(".\\interrupt.txt", "w")
#
# string = ""
# for i in range(32):
#     string += f"global isr{i}\n"
# string+="\n"
# for i in range(32):
#     string+= f"isr{i}:\n\tpush byte 0\n\tpush byte {i}\n\tjmp isr_common_stub\n\n"

# assembly_file.write(string)

# for i in range(16):
#     print(f"global irq{i}")
#
# print()
# for i in range(16):
#     print(f"irq{i}:\n\tpush byte 0\n\tpush byte 32\n\tjmp irq_common_stub\n")