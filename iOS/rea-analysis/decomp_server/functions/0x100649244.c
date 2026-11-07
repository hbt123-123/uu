// rea decompile_all
// name: FUN_100649244
// address: 0x100649244
// body: available
// range: 0x100649244-0x1006492b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100649244(long param_1,long param_2,char param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  
  if (param_3 == '\0') {
    if (param_2 != 0) {
      uVar2 = 2;
      goto LAB_100649294;
    }
    uVar2 = (ulong)(param_1 != 0);
  }
  else if (param_3 == '\x01') {
    uVar2 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006492b8);
      (*pcVar1)();
    }
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100649264);
      (*pcVar1)();
    }
  }
  else {
    uVar2 = *(ulong *)(param_4 + 0x10);
  }
  if (uVar2 + 0xfe00000000000000 >> 0x3a < 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006492b0);
    (*pcVar1)();
  }
LAB_100649294:
  if (!SCARRY8(uVar2 * 0x40,0x40)) {
    return uVar2 * 0x40 + 0x3f >> 6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006492b4);
  (*pcVar1)();
}

