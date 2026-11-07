// rea decompile_all
// name: FUN_100660a68
// address: 0x100660a68
// body: available
// range: 0x100660a68-0x100660ac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100660a68(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x20;
  
  lVar4 = *param_2;
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  if ((char)unaff_x20[2] == '\0') {
    uVar5 = (ulong)(lVar1 != 0);
    if (lVar2 != 0) {
      uVar5 = 2;
    }
  }
  else if ((char)unaff_x20[2] == '\x01') {
    uVar5 = lVar2 - lVar1;
    if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100660a8c);
      (*pcVar3)();
    }
  }
  else {
    uVar5 = *(ulong *)(unaff_x20[3] + 0x10);
  }
  if ((-1 < lVar4) && (lVar4 < (long)uVar5)) {
    *param_1 = lVar4 + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100660ac8);
  (*pcVar3)();
}

