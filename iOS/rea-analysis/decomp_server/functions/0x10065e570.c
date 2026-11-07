// rea decompile_all
// name: FUN_10065e570
// address: 0x10065e570
// body: available
// range: 0x10065e570-0x10065e5c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10065e570(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10065e5c0);
    (*pcVar3)();
  }
  lVar5 = 0;
  uVar6 = 1;
  do {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar6;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_1;
    lVar7 = SUB168(auVar1 * auVar2,8);
    if (lVar7 != 0) {
      if (uVar6 * param_1 == 0 && lVar7 == 1) {
        bVar4 = SCARRY8(lVar5,1);
        lVar5 = lVar5 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10065e5c4);
          (*pcVar3)();
        }
        uVar6 = 0;
      }
      auVar8._8_8_ = uVar6;
      auVar8._0_8_ = lVar5;
      return auVar8;
    }
    bVar4 = SCARRY8(lVar5,1);
    lVar5 = lVar5 + 1;
    uVar6 = uVar6 * param_1;
  } while (!bVar4);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10065e5a0);
  (*pcVar3)();
}

