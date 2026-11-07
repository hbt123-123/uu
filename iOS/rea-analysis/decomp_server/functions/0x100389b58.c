// rea decompile_all
// name: FUN_100389b58
// address: 0x100389b58
// body: available
// range: 0x100389b58-0x100389d0f inclusive
// range: 0x100389d8c-0x100389dbf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100389b58(ulong param_1,char *param_2,char *param_3,int param_4,ulong param_5)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  uint local_68;
  uint3 local_64;
  uint5 local_61;
  undefined8 *local_58;
  
  bVar1 = (uint)param_5 < (uint)(byte)param_3[1];
  if (*param_3 != '\0') {
    bVar1 = (param_5 & 0xffffffff) < *(ulong *)(param_3 + 2);
  }
  uVar8 = (uint)(byte)param_3[1];
  if (*param_3 != '\0') {
    uVar8 = (uint)*(ulong *)(param_3 + 2);
  }
  uVar10 = (ulong)uVar8;
  uVar3 = (uint)(byte)param_2[1];
  if (*param_2 != '\0') {
    uVar3 = *(uint *)(param_2 + 2);
  }
  if (param_4 != 0) {
    uVar6 = uVar3;
    FUN_10039280c();
    uVar3 = uVar6 + uVar3;
  }
  if (!bVar1) {
    FUN_10039280c();
    uVar10 = (ulong)((int)uVar10 + uVar8);
  }
  uVar8 = uVar3;
  FUN_10039280c();
  lVar2 = (uVar8 + uVar3) + uVar10;
  local_58 = *(undefined8 **)(param_1 + 0xd0);
  if ((local_58 != (undefined8 *)0x0) && (*(char *)((long)local_58 + 0xc) == '\x01')) {
    FUN_10037dd20(*local_58,*(undefined4 *)(local_58 + 1));
  }
  uVar10 = param_1;
  FUN_10038798c(param_1,lVar2);
  if (((int)uVar10 == 0) || (uVar10 = param_1, FUN_1003805d0(), (uVar10 & 1) == 0)) {
    uVar10 = 0;
    uVar9 = 0;
  }
  else {
    if ((*(long *)(param_1 + 0xb0) != 0) && (0x100 < uVar3)) {
      FUN_100392ef8(*(long *)(param_1 + 0xb0),&DAT_100ad13e8);
    }
    if (bVar1) {
      FUN_10037d94c(*(undefined8 *)(param_1 + 0x90),param_3);
    }
    else {
      FUN_10037d90c(*(undefined8 *)(param_1 + 0x90),param_3);
    }
    if (param_4 != 0) {
      FUN_10037d6bc(*(undefined8 *)(param_1 + 0x90),uVar3);
    }
    FUN_10037d90c(*(undefined8 *)(param_1 + 0x90),param_2);
    lVar5 = *(long *)(param_1 + 0x88);
    lVar4 = *(long *)(*(long *)(param_1 + 0x80) + 0x20) + lVar5;
    lVar7 = lVar5;
    if (*(long *)(param_1 + 0xb0) != 0) {
      FUN_100392cb0(*(long *)(param_1 + 0xb0),lVar4 + 4,lVar4 + 4,lVar2);
      lVar7 = *(long *)(param_1 + 0x88);
    }
    *(long *)(param_1 + 0x88) = lVar7 + lVar2;
    FUN_100380748(param_1,lVar4 + 4,lVar2);
    FUN_10037e0b8(&local_68,param_5,uVar3,lVar5);
    uVar9 = (ulong)local_61;
    uVar10 = (ulong)local_68 << 8 | (ulong)local_64 << 0x28 | 1;
  }
  FUN_100385fb0(&local_58);
  auVar11._8_8_ = uVar9;
  auVar11._0_8_ = uVar10;
  return auVar11;
}

