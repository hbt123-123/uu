// rea decompile_all
// name: FUN_10032b8e4
// address: 0x10032b8e4
// body: available
// range: 0x10032b8e4-0x10032b99b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10032b8e4(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long local_40;
  undefined *puStack_38;
  long local_30;
  long local_28;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  uVar2 = uVar3;
  __sScS12ContinuationV15BufferingPolicyOMa();
  if (uVar2 < 0x40) {
    local_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &DAT_10081a520;
    lVar1 = 0x13f;
    uVar2 = uVar3;
    __sScSMa();
    if (uVar2 < 0x40) {
      local_30 = *(long *)(lVar1 + -8) + 0x40;
      lVar1 = 0x13f;
      __sScS12ContinuationVMa();
      if (uVar3 < 0x40) {
        local_28 = *(long *)(lVar1 + -8) + 0x40;
        _swift_initStructMetadata(param_1,0,4,&local_40,param_1 + 0x18);
      }
    }
  }
  return;
}

