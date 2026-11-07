// rea decompile_all
// name: FUN_1001ff810
// address: 0x1001ff810
// body: available
// range: 0x1001ff810-0x1001ff8bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ff810(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x37);
  __sSS6appendyySSF(0x1000000000000035,0x80000001008a2250);
  uVar1 = 0;
  if (*(char *)(param_2 + 0x2c) == '\0') {
    uVar1 = *(undefined4 *)(param_2 + 0x28);
  }
  __sSf5write2toyxz_ts16TextOutputStreamRzlF
            (uVar1,&local_40,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_40;
  param_1[1] = uStack_38;
  return;
}

