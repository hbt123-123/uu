// rea decompile_all
// name: FUN_100068638
// address: 0x100068638
// body: available
// range: 0x100068638-0x100068797 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100068638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_6c;
  undefined8 local_68;
  
  local_a0 = param_10;
  lVar2 = 0xff;
  uStack_98 = param_3;
  local_8c = param_4;
  local_88 = param_2;
  local_80 = param_6;
  uStack_78 = param_7;
  local_6c = param_8;
  local_68 = param_1;
  __sSqMa(0xff,param_9);
  lVar3 = 0;
  FUN_100098548(0,lVar2);
  lVar8 = *(long *)(lVar3 + -8);
  lVar6 = (long)&local_a0 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(lVar2 + -8);
  uVar5 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar7 = uVar5 + 0x71 & (uVar5 ^ 0xffffffffffffffff);
  uVar9 = *(long *)(lVar10 + 0x40) + uVar7 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_1000f8300;
  _swift_allocObject(&DAT_1000f8300,uVar9 + 0x11,uVar5 | 7);
  uVar13 = param_5[1];
  uVar12 = *param_5;
  uVar11 = param_5[2];
  *(undefined8 *)(puVar4 + 0x40) = param_5[3];
  *(undefined8 *)(puVar4 + 0x38) = uVar11;
  uVar11 = param_5[4];
  uVar15 = param_5[7];
  uVar14 = param_5[6];
  *(undefined8 *)(puVar4 + 0x50) = param_5[5];
  *(undefined8 *)(puVar4 + 0x48) = uVar11;
  *(undefined8 *)(puVar4 + 0x60) = uVar15;
  *(undefined8 *)(puVar4 + 0x58) = uVar14;
  *(undefined8 *)(puVar4 + 0x10) = param_9;
  *(undefined8 *)(puVar4 + 0x18) = local_a0;
  *(undefined8 *)(puVar4 + 0x20) = uStack_98;
  *(undefined8 *)(puVar4 + 0x68) = param_5[8];
  *(undefined8 *)(puVar4 + 0x30) = uVar13;
  *(undefined8 *)(puVar4 + 0x28) = uVar12;
  puVar4[0x70] = (char)local_8c;
  (**(code **)(lVar10 + 0x20))(puVar4 + uVar7,local_88,lVar2);
  puVar1 = (undefined8 *)(puVar4 + uVar9);
  *puVar1 = local_80;
  puVar1[1] = uStack_78;
  *(char *)(puVar1 + 2) = (char)local_6c;
  FUN_100098b0c(lVar6,FUN_10006a3f4,puVar4,lVar2);
  (**(code **)(lVar8 + 0x20))(local_68,lVar6,lVar3);
  return;
}

