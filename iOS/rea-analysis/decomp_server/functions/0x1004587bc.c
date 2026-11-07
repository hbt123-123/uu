// rea decompile_all
// name: thunk_FUN_10041bc08
// address: 0x1004587bc
// body: available
// range: 0x1004587bc-0x1004587bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong thunk_FUN_10041bc08(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = *unaff_x20;
  uVar5 = unaff_x20[2];
  uVar3 = unaff_x20[3];
  if ((uVar4 != *param_1 || unaff_x20[1] != param_1[1]) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar4 & 1) == 0)) {
    return 0;
  }
  FUN_1000094a4(uVar5,uVar3,uVar1,uVar2);
  return uVar5;
}

