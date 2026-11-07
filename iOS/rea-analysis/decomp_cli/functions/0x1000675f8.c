// rea decompile_all
// name: FUN_1000675f8
// address: 0x1000675f8
// body: available
// range: 0x1000675f8-0x100067747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000675f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  long param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_6c;
  undefined8 local_68;
  
  lVar2 = 0;
  local_98 = param_3;
  local_8c = param_4;
  local_88 = param_2;
  local_80 = param_6;
  uStack_78 = param_7;
  local_6c = param_8;
  local_68 = param_1;
  FUN_100098548(0,param_9);
  lVar7 = *(long *)(lVar2 + -8);
  lVar4 = *(long *)(lVar7 + 0x40);
  lVar8 = *(long *)(param_9 + -8);
  uVar5 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar9 = uVar5 + 0x71 & (uVar5 ^ 0xffffffffffffffff);
  uVar6 = *(long *)(lVar8 + 0x40) + uVar9 + 7 & 0xfffffffffffffff8;
  puVar3 = &DAT_1000f8238;
  _swift_allocObject(&DAT_1000f8238,uVar6 + 0x11,uVar5 | 7);
  uVar12 = param_5[1];
  uVar11 = *param_5;
  uVar10 = param_5[2];
  *(undefined8 *)(puVar3 + 0x40) = param_5[3];
  *(undefined8 *)(puVar3 + 0x38) = uVar10;
  uVar10 = param_5[4];
  uVar14 = param_5[7];
  uVar13 = param_5[6];
  *(undefined8 *)(puVar3 + 0x50) = param_5[5];
  *(undefined8 *)(puVar3 + 0x48) = uVar10;
  *(undefined8 *)(puVar3 + 0x60) = uVar14;
  *(undefined8 *)(puVar3 + 0x58) = uVar13;
  *(long *)(puVar3 + 0x10) = param_9;
  *(undefined8 *)(puVar3 + 0x18) = param_10;
  *(undefined8 *)(puVar3 + 0x20) = local_98;
  *(undefined8 *)(puVar3 + 0x68) = param_5[8];
  *(undefined8 *)(puVar3 + 0x30) = uVar12;
  *(undefined8 *)(puVar3 + 0x28) = uVar11;
  puVar3[0x70] = (char)local_8c;
  (**(code **)(lVar8 + 0x20))(puVar3 + uVar9,local_88,param_9);
  puVar1 = (undefined8 *)(puVar3 + uVar6);
  *puVar1 = local_80;
  puVar1[1] = uStack_78;
  *(char *)(puVar1 + 2) = (char)local_6c;
  FUN_100098b0c(auStack_a0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),FUN_10006a150,puVar3,param_9);
  (**(code **)(lVar7 + 0x20))(local_68,auStack_a0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),lVar2);
  return;
}

