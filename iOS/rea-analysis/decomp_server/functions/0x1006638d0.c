// rea decompile_all
// name: FUN_1006638d0
// address: 0x1006638d0
// body: available
// range: 0x1006638d0-0x10066397f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006638d0(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  uVar2 = 0;
  uVar6 = uVar4;
  if (0xff < uVar4) {
    uVar6 = 0x100;
  }
  while( true ) {
    uVar5 = uVar6;
    if (uVar2 == uVar4) {
      return;
    }
    if (((long)uVar4 < (long)uVar2) || ((long)uVar4 < (long)uVar5)) break;
    uVar6 = uVar4;
    if ((0xff < uVar4 - uVar5) && (uVar6 = uVar5 + 0x100, SCARRY8(uVar5,0x100))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10066397c);
      (*pcVar1)();
    }
    if ((long)uVar6 < (long)uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100663978);
      (*pcVar1)();
    }
    if (uVar2 != uVar5) {
      uVar3 = uVar2;
      if ((long)uVar5 <= (long)uVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100663980);
        (*pcVar1)();
      }
      do {
        uVar3 = uVar3 + 1;
        uVar2 = uVar5;
      } while (uVar5 != uVar3);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100663974);
  (*pcVar1)();
}

