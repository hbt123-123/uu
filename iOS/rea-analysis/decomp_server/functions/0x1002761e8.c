// rea decompile_all
// name: FUN_1002761e8
// address: 0x1002761e8
// body: available
// range: 0x1002761e8-0x1002762cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_1002761e8(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  
  lVar2 = 0;
  FUN_1002a7694();
  lVar3 = -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)(&stack0xffffffffffffffd0 + lVar3);
  *(undefined8 *)(&stack0xffffffffffffffd8 + lVar3) = 0xf000000000000000;
  *puVar6 = 0;
  iVar1 = *(int *)(lVar2 + 0x14);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))((long)puVar6 + (long)iVar1,1,1,lVar3);
  plVar4 = (long *)&DAT_100a821e8;
  FUN_100004bb4(&DAT_100a821e8,&DAT_100816010);
  _swift_allocObject();
  lVar3 = 0;
  FUN_1002c6dd8();
  _swift_allocObject();
  puVar5 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar3 + 0x10) = puVar5;
  *puVar5 = 0;
  plVar4[2] = lVar3;
  FUN_1002762d0(puVar6,(undefined *)((long)plVar4 + *(long *)(*plVar4 + 0x60)));
  return plVar4;
}

