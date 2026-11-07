// rea decompile_all
// name: FUN_1003896a4
// address: 0x1003896a4
// body: available
// range: 0x1003896a4-0x1003897af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003896a4(ulong param_1,char *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_6a [26];
  
  uVar3 = *(ushort *)(param_3 + 2);
  uVar5 = (uint)uVar3;
  FUN_10039280c(uVar3);
  uVar2 = (uint)(byte)param_2[1];
  if (*param_2 != '\0') {
    uVar2 = *(uint *)(param_2 + 2);
  }
  uVar6 = (ulong)uVar2;
  if ((int)param_4 != 0) {
    FUN_10039280c(uVar6);
    uVar6 = (ulong)((int)uVar6 + uVar2);
  }
  lVar1 = (uVar5 + uVar3) + uVar6;
  FUN_10039280c(uVar6);
  uVar4 = param_1;
  FUN_10038a0c4(param_1,lVar1 + (uVar6 & 0xffffffff));
  if ((uVar4 & 1) == 0) {
    FUN_1003897c4(param_1,param_2,param_3,param_4);
  }
  else {
    thunk_FUN_10037e874(auStack_6a,
                        *(long *)(*(long *)(param_1 + 0x80) + 0x20) + (ulong)*(uint *)(param_3 + 8)
                        + 4,(ulong)(uVar5 + uVar3),1);
    FUN_100389df4(param_1,param_2,auStack_6a,param_4,uVar3);
    thunk_FUN_10037edac(auStack_6a);
  }
  auVar7._8_8_ = (ulong)param_2 & 0xffffffffff;
  auVar7._0_8_ = param_1;
  return auVar7;
}

