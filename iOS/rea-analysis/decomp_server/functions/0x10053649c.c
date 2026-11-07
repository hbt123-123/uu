// rea decompile_all
// name: FUN_10053649c
// address: 0x10053649c
// body: available
// range: 0x10053649c-0x100536527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053649c(byte *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    param_1 = (byte *)0x0;
  }
  else if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) {
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
      }
      else {
        param_1 = (byte *)((param_2 & 0xfffffffffffffff) + 0x20);
      }
      param_1 = (byte *)(ulong)*param_1;
    }
  }
  else {
    param_1 = (byte *)0xf;
    __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF(0xf);
  }
  return (uint)param_1 & 0xff | (uint)(uVar1 == 0) << 8;
}

