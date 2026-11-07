// rea decompile_all
// name: FUN_10000caa8
// address: 0x10000caa8
// body: available
// range: 0x10000caa8-0x10000cb1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10000caa8(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1 >> 0xe & 3;
  if (((param_3 >> 0x3c & 1) == 0) || ((param_2 >> 0x3b & 1) != 0)) {
    uVar1 = 0xf;
    __sSS9UTF16ViewV5index_8offsetBySS5IndexVAF_SitF(0xf,param_1 >> 0x10);
    uVar2 = uVar1 & 0xfffffffffffffffc | param_1 & 3;
    if (uVar3 != 0) {
      uVar2 = uVar1 + uVar3 * 0x10000 & 0xffffffffffff0000;
    }
    uVar2 = uVar2 | 4;
  }
  else {
    uVar1 = 0xf;
    __sSS8UTF8ViewV13_foreignIndex_8offsetBySS0D0VAF_SitF(0xf);
    uVar2 = uVar1 & 0xfffffffffffffffc | param_1 & 3;
    if (uVar3 != 0) {
      uVar2 = uVar1 + uVar3 * 0x10000 & 0xffffffffffff0000;
    }
    uVar2 = uVar2 | 8;
  }
  return uVar2;
}

