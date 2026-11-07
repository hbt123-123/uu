// rea decompile_all
// name: FUN_10005be54
// address: 0x10005be54
// body: available
// range: 0x10005be54-0x10005bf83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005be54(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,long param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_6c;
  undefined8 local_68;
  
  lVar2 = 0;
  local_88 = param_2;
  local_80 = param_4;
  uStack_78 = param_5;
  local_6c = param_6;
  local_68 = param_1;
  FUN_100098548(0,param_7);
  lVar6 = *(long *)(lVar2 + -8);
  lVar4 = *(long *)(lVar6 + 0x40);
  lVar7 = *(long *)(param_7 + -8);
  uVar5 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar5 + 0x68 & (uVar5 ^ 0xffffffffffffffff);
  uVar9 = *(long *)(lVar7 + 0x40) + uVar8 + 7 & 0xfffffffffffffff8;
  puVar3 = &DAT_1000f7098;
  _swift_allocObject(&DAT_1000f7098,uVar9 + 0x11,uVar5 | 7);
  *(long *)(puVar3 + 0x10) = param_7;
  *(undefined8 *)(puVar3 + 0x18) = param_8;
  uVar10 = param_3[4];
  uVar12 = param_3[7];
  uVar11 = param_3[6];
  *(undefined8 *)(puVar3 + 0x48) = param_3[5];
  *(undefined8 *)(puVar3 + 0x40) = uVar10;
  *(undefined8 *)(puVar3 + 0x58) = uVar12;
  *(undefined8 *)(puVar3 + 0x50) = uVar11;
  *(undefined8 *)(puVar3 + 0x60) = param_3[8];
  uVar12 = *param_3;
  uVar11 = param_3[3];
  uVar10 = param_3[2];
  *(undefined8 *)(puVar3 + 0x28) = param_3[1];
  *(undefined8 *)(puVar3 + 0x20) = uVar12;
  *(undefined8 *)(puVar3 + 0x38) = uVar11;
  *(undefined8 *)(puVar3 + 0x30) = uVar10;
  (**(code **)(lVar7 + 0x20))(puVar3 + uVar8,local_88,param_7);
  puVar1 = (undefined8 *)(puVar3 + uVar9);
  *puVar1 = local_80;
  puVar1[1] = uStack_78;
  *(char *)(puVar1 + 2) = (char)local_6c;
  FUN_100098b0c(auStack_90 + -(lVar4 + 0xfU & 0xfffffffffffffff0),FUN_10005e268,puVar3,param_7);
  (**(code **)(lVar6 + 0x20))(local_68,auStack_90 + -(lVar4 + 0xfU & 0xfffffffffffffff0),lVar2);
  return;
}

