// rea decompile_all
// name: FUN_10050f90c
// address: 0x10050f90c
// body: available
// range: 0x10050f90c-0x10050fa13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050f90c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = 0;
    FUN_100040bb4(param_1,&DAT_100aaa288,&DAT_100836090);
    FUN_1003618e4(param_2);
    if ((uVar1 & 1) == 0) {
      local_40 = 0;
      uStack_58 = 0;
      local_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
    }
    else {
      uVar1 = *unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar2 = *unaff_x20;
      if ((uVar1 & 1) == 0) {
        FUN_10054ae38();
      }
      thunk_FUN_1000a0074(*(long *)(uVar2 + 0x38) + param_2 * 0x28,&local_60);
      FUN_100521964(param_2,uVar2);
      *unaff_x20 = uVar2;
    }
    FUN_100040bb4(&local_60,&DAT_100aaa288,&DAT_100836090);
  }
  else {
    thunk_FUN_1000a0074(param_1,&local_60);
    uVar1 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar1);
    uVar2 = *unaff_x20;
    FUN_100521478(&local_60,param_2,uVar1);
    *unaff_x20 = uVar2;
  }
  return;
}

