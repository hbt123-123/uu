// rea decompile_all
// name: FUN_10063d790
// address: 0x10063d790
// body: available
// range: 0x10063d790-0x10063d80b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10063d790(uint param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  byte bVar4;
  
  FUN_10063e850();
  uVar1 = 1 - (param_1 & 0xff);
  if ((uVar1 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10063d7f8);
    (*pcVar2)();
  }
  uVar3 = param_2;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar3 & 1) == 0) {
    FUN_1006541b8();
  }
  if (0xf < *(ulong *)(param_2 + 0x10)) {
    bVar4 = 0x87;
    if ((uVar1 & 0x1f) != 0) {
      bVar4 = 0;
    }
    *(byte *)(param_2 + 0x2f) = *(byte *)(param_2 + 0x2f) ^ bVar4;
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10063d80c);
  (*pcVar2)();
}

