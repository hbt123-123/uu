// rea decompile_all
// name: FUN_100068e08
// address: 0x100068e08
// body: available
// range: 0x100068e08-0x100068f63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100068e08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  
  local_a0 = param_10;
  lVar2 = 0xff;
  local_a8 = param_3;
  local_94 = param_4;
  local_90 = param_2;
  local_88 = param_9;
  local_80 = param_6;
  local_78 = param_7;
  local_6c = param_8;
  local_68 = param_1;
  __sSqMa(0xff,param_11);
  lVar3 = 0;
  FUN_100098548(0,lVar2);
  lVar8 = *(long *)(lVar3 + -8);
  lVar5 = *(long *)(lVar8 + 0x40);
  lVar10 = *(long *)(lVar2 + -8);
  uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar9 = uVar6 + 0x80 & (uVar6 ^ 0xffffffffffffffff);
  uVar7 = *(long *)(lVar10 + 0x40) + uVar9 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_1000f8378;
  _swift_allocObject(&DAT_1000f8378,uVar7 + 0x11,uVar6 | 7);
  *(undefined8 *)(puVar4 + 0x10) = param_11;
  *(undefined8 *)(puVar4 + 0x18) = local_a8;
  uVar11 = param_5[4];
  uVar13 = param_5[7];
  uVar12 = param_5[6];
  *(undefined8 *)(puVar4 + 0x48) = param_5[5];
  *(undefined8 *)(puVar4 + 0x40) = uVar11;
  *(undefined8 *)(puVar4 + 0x58) = uVar13;
  *(undefined8 *)(puVar4 + 0x50) = uVar12;
  *(undefined8 *)(puVar4 + 0x60) = param_5[8];
  uVar13 = *param_5;
  uVar12 = param_5[3];
  uVar11 = param_5[2];
  *(undefined8 *)(puVar4 + 0x28) = param_5[1];
  *(undefined8 *)(puVar4 + 0x20) = uVar13;
  *(undefined8 *)(puVar4 + 0x38) = uVar12;
  *(undefined8 *)(puVar4 + 0x30) = uVar11;
  puVar4[0x68] = (char)local_94;
  *(undefined8 *)(puVar4 + 0x70) = local_88;
  *(undefined8 *)(puVar4 + 0x78) = local_a0;
  (**(code **)(lVar10 + 0x20))(puVar4 + uVar9,local_90,lVar2);
  puVar1 = (undefined8 *)(puVar4 + uVar7);
  *puVar1 = local_80;
  puVar1[1] = local_78;
  *(char *)(puVar1 + 2) = (char)local_6c;
  FUN_100098b0c(auStack_b0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),FUN_10006a5b4,puVar4,lVar2);
  (**(code **)(lVar8 + 0x20))(local_68,auStack_b0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),lVar3);
  return;
}

