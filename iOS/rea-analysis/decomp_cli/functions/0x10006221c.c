// rea decompile_all
// name: FUN_10006221c
// address: 0x10006221c
// body: available
// range: 0x10006221c-0x10006234b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006221c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_6c;
  undefined8 local_68;
  
  lVar2 = 0;
  local_80 = param_6;
  uStack_78 = param_2;
  local_6c = param_3;
  local_68 = param_1;
  FUN_100098548(0,param_5);
  lVar6 = *(long *)(lVar2 + -8);
  lVar8 = (long)&local_80 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __sSqMa(0,param_5);
  lVar7 = *(long *)(lVar3 + -8);
  uVar5 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar9 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(lVar7 + 0x40) + uVar9 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_1000f7f00;
  _swift_allocObject(&DAT_1000f7f00,uVar10 + 0x49,uVar5 | 7);
  *(undefined8 *)(puVar4 + 0x10) = param_5;
  *(undefined8 *)(puVar4 + 0x18) = local_80;
  (**(code **)(lVar7 + 0x20))(puVar4 + uVar9,uStack_78,lVar3);
  puVar1 = (undefined8 *)(puVar4 + uVar10);
  uVar11 = param_4[4];
  uVar13 = param_4[7];
  uVar12 = param_4[6];
  puVar1[5] = param_4[5];
  puVar1[4] = uVar11;
  puVar1[7] = uVar13;
  puVar1[6] = uVar12;
  puVar1[8] = param_4[8];
  uVar13 = *param_4;
  uVar12 = param_4[3];
  uVar11 = param_4[2];
  puVar1[1] = param_4[1];
  *puVar1 = uVar13;
  puVar1[3] = uVar12;
  puVar1[2] = uVar11;
  *(char *)(puVar1 + 9) = (char)local_6c;
  FUN_100098b0c(lVar8,FUN_100065334,puVar4,param_5);
  (**(code **)(lVar6 + 0x20))(local_68,lVar8,lVar2);
  return;
}

