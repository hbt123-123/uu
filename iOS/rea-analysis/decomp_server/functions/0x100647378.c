// rea decompile_all
// name: FUN_100647378
// address: 0x100647378
// body: available
// range: 0x100647378-0x100647457 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006473d4 to 0x100645d2c FUN_100645d2c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100647378(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long *plVar4;
  
  if (0 < (long)param_1) {
    if ((char)unaff_x20[2] == '\0') {
      if (param_1 == 1) {
        *unaff_x20 = unaff_x20[1];
        unaff_x20[1] = 0;
        *(undefined1 *)(unaff_x20 + 2) = 0;
        return;
      }
    }
    else {
      if ((char)unaff_x20[2] != '\x01') {
        plVar4 = unaff_x20 + 3;
        lVar2 = *plVar4;
        if (*(ulong *)(lVar2 + 0x10) <= param_1) {
          _swift_isUniquelyReferenced_nonNull_native();
          lVar3 = *plVar4;
          if ((int)lVar2 == 0) {
            lVar2 = 0;
            FUN_100629f38(0,*(ulong *)(lVar3 + 0x18) >> 1);
            _swift_bridgeObjectRelease(lVar3);
            *plVar4 = lVar2;
            return;
          }
          param_1 = *(ulong *)(lVar3 + 0x10);
        }
        FUN_100634e4c(0,param_1);
        return;
      }
      lVar2 = *unaff_x20 + param_1;
      if (SCARRY8(*unaff_x20,param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100647458);
        (*pcVar1)();
      }
      if (lVar2 < unaff_x20[1]) {
        *unaff_x20 = lVar2;
        *(undefined1 *)(unaff_x20 + 2) = 1;
        FUN_100645d2c();
        return;
      }
    }
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    *(undefined1 *)(unaff_x20 + 2) = 0;
  }
  return;
}

