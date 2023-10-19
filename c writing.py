# print("void isr_install(){")
# for i in range(32):
#     print(f"\r\tset_idt_gate({i}, (uint32_t)isr{i});")
# print("}")

# for i in range(16):
#     print(f"set_idt_gate({32+i}, (uint32_t)irq{i});")

for i in range(32):
    print(f"extern int isr{i};")

for i in range(16):
    print(f"extern int irq{i};")