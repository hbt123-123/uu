// rea decompile_all
// name: FUN_1003897c4
// address: 0x1003897c4
// body: available
// range: 0x1003897c4-0x1003898ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003897c4(long param_1,char *param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_72 [26];
  undefined8 *local_58;
  
  local_58 = *(undefined8 **)(param_1 + 0xd0);
  if ((local_58 != (undefined8 *)0x0) && (*(char *)((long)local_58 + 0xc) == '\x01')) {
    FUN_10037dd20(*local_58,*(undefined4 *)(local_58 + 1));
  }
  uVar2 = *(ushort *)(param_3 + 2);
  uVar5 = (uint)uVar2;
  FUN_10039280c(uVar2);
  uVar1 = (uint)(byte)param_2[1];
  if (*param_2 != '\0') {
    uVar1 = *(uint *)(param_2 + 2);
  }
  uVar6 = (ulong)uVar1;
  if ((int)param_4 != 0) {
    FUN_10039280c(uVar6);
    uVar6 = (ulong)((int)uVar6 + uVar1);
  }
  uVar3 = uVar6;
  FUN_10039280c(uVar6);
  lVar4 = param_1;
  FUN_10038798c(param_1,(uVar5 + uVar2) + uVar6 + (uVar3 & 0xffffffff));
  if ((int)lVar4 == 0) {
    param_1 = 0;
    uVar6 = 0;
  }
  else {
    thunk_FUN_10037e874(auStack_72,
                        *(long *)(*(long *)(param_1 + 0x80) + 0x20) + (ulong)*(uint *)(param_3 + 8)
                        + 4,(ulong)(uVar5 + uVar2),1);
    FUN_100389b58(param_1,param_2,auStack_72,param_4,uVar2);
    thunk_FUN_10037edac(auStack_72);
    uVar6 = (ulong)param_2 & 0xffffffffff;
  }
  FUN_100385fb0(&local_58);
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = param_1;
  return auVar7;
}

