// rea decompile_all
// name: FUN_100511c0c
// address: 0x100511c0c
// body: available
// range: 0x100511c0c-0x100511c8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100511c88 to 0x100511b40 FUN_100511b40 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100511c0c(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x28);
  __ss6HasherV5_seedABSi_tcfC(auStack_88,uVar2);
  pbVar1 = param_1;
  if (param_1 != (byte *)0x0) {
    for (; pbVar1 != param_2; pbVar1 = pbVar1 + 1) {
      uVar2 = (ulong)*pbVar1;
      __ss6HasherV8_combineyys5UInt8VF(uVar2);
    }
  }
  __ss6HasherV9_finalizeSiyF();
  FUN_100511b40(param_1,param_2,uVar2);
  return;
}

