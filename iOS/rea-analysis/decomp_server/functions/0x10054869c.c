// rea decompile_all
// name: FUN_10054869c
// address: 0x10054869c
// body: available
// range: 0x10054869c-0x10054876f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054869c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 local_60;
  long lStack_58;
  
  lVar1 = *(long *)(param_3 + 0x10);
  FUN_1005468cc(param_2,lVar1,*(undefined8 *)(param_3 + 0x18));
  if (lVar1 != 0) {
    if (unaff_x20[1] == 0) {
      FUN_10003e8bc(param_1,&local_60);
    }
    else {
      local_60 = *unaff_x20;
      lStack_58 = unaff_x20[1];
      _swift_bridgeObjectRetain();
      __sSS6appendyySSF(0x2e,0xe100000000000000);
      __sSS6appendyySSF(param_2,lVar1);
      _swift_bridgeObjectRelease(lVar1);
      lVar1 = lStack_58;
      param_2 = local_60;
      FUN_10003e8bc(param_1,&local_60);
    }
    FUN_10050f840(&local_60,param_2,lVar1);
  }
  return;
}

