// rea decompile_all
// name: FUN_100530394
// address: 0x100530394
// body: available
// range: 0x100530394-0x1005304c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100530394(ulong *param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 local_68;
  undefined8 uStack_60;
  char local_47;
  
  if (((param_3 & 1) == 0) && (FUN_10050f0c4(&local_68,param_4,param_5), local_47 != -1)) {
    FUN_10052cc80(local_68,uStack_60);
    FUN_100040bb4(&local_68,&DAT_100aab440,&DAT_1008387e0);
    return;
  }
  (**(code **)(param_5 + 0x28))(param_4,param_5);
  if (param_4 < 0) {
    uVar3 = *param_1;
    uVar1 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar2 = uVar3;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      FUN_100506f84(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    }
    uVar1 = *(ulong *)(uVar2 + 0x10);
    uVar3 = uVar2;
    if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
      FUN_100506f84(uVar3,uVar1 + 1,1,uVar2);
    }
    *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar3 + uVar1 + 0x20) = 0x2d;
    *param_1 = uVar3;
  }
  FUN_10052badc();
  return;
}

