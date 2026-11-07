// rea decompile_all
// name: FUN_100660874
// address: 0x100660874
// body: available
// range: 0x100660874-0x1006608cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100660874(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  if ((char)unaff_x20[2] == '\0') {
    uVar5 = (ulong)(lVar1 != 0);
    if (lVar2 != 0) {
      uVar5 = 2;
    }
    *param_1 = 0;
    param_1[1] = uVar5;
    return;
  }
  if ((char)unaff_x20[2] != '\x01') {
    uVar4 = *(undefined8 *)(unaff_x20[3] + 0x10);
    *param_1 = 0;
    param_1[1] = uVar4;
    return;
  }
  if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006608d0);
    (*pcVar3)();
  }
  if (-1 < lVar2 - lVar1) {
    *param_1 = 0;
    param_1[1] = lVar2 - lVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006608cc);
  (*pcVar3)();
}

