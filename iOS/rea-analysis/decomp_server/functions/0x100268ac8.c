// rea decompile_all
// name: FUN_100268ac8
// address: 0x100268ac8
// body: available
// range: 0x100268ac8-0x100268c7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100268ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *unaff_x20;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_c0 [8];
  
  lVar6 = *unaff_x20;
  lVar3 = 0;
  __s10Foundation10URLRequestVMa();
  lVar5 = *(long *)(lVar3 + -8);
  lVar12 = *(long *)(lVar5 + 0x40);
  puVar8 = auStack_c0 + -(lVar12 + 0xfU & 0xfffffffffffffff0);
  lVar15 = *(long *)(lVar6 + 0x50);
  lVar16 = *(long *)(lVar15 + -8);
  lVar10 = *(long *)(lVar16 + 0x40);
  lVar7 = (long)puVar8 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar16 + 0x10))(lVar7,param_2,lVar15);
  (**(code **)(lVar5 + 0x10))(puVar8,param_7,lVar3);
  bVar1 = *(byte *)(lVar16 + 0x50);
  uVar9 = (ulong)bVar1 + 0x40 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  uVar11 = lVar10 + uVar9 + 7 & 0xfffffffffffffff8;
  bVar2 = *(byte *)(lVar5 + 0x50);
  uVar14 = bVar2 + uVar11 + 8 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  uVar13 = lVar12 + uVar14 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_1009a9000;
  _swift_allocObject(&DAT_1009a9000,uVar13 + 8,bVar1 | bVar2 | 7);
  *(long *)(puVar4 + 0x10) = lVar15;
  *(undefined8 *)(puVar4 + 0x18) = *(undefined8 *)(lVar6 + 0x58);
  *(undefined8 *)(puVar4 + 0x20) = param_1;
  *(long **)(puVar4 + 0x28) = unaff_x20;
  *(undefined8 *)(puVar4 + 0x30) = param_3;
  *(undefined8 *)(puVar4 + 0x38) = param_4;
  (**(code **)(lVar16 + 0x20))(puVar4 + uVar9,lVar7,lVar15);
  *(undefined8 *)(puVar4 + uVar11) = param_5;
  (**(code **)(lVar5 + 0x20))(puVar4 + uVar14,puVar8,lVar3);
  *(undefined8 *)(puVar4 + uVar13) = param_6;
  _swift_retain(param_1);
  _swift_retain(unaff_x20);
  _swift_retain(param_4);
  _swift_retain(param_5);
  _swift_bridgeObjectRetain(param_6);
  auVar17._8_8_ = puVar4;
  auVar17._0_8_ = FUN_10026b1bc;
  return auVar17;
}

