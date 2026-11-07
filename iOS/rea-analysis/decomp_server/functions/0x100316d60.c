// rea decompile_all
// name: FUN_100316d60
// address: 0x100316d60
// body: available
// range: 0x100316d60-0x100316e43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_100316d60(double param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ID self;
  long lVar4;
  long lVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  
  lVar3 = 0;
  FUN_100316ccc();
  pdVar6 = (double *)(param_2 + *(int *)(lVar3 + 0x30));
  if (((ulong)pdVar6[2] & 1) == 0) {
    dVar7 = pdVar6[1];
    dVar8 = *pdVar6;
    self = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
    NSProcessInfo::systemUptime(self,"systemUptime");
    lVar5 = *(long *)(param_2 + *(int *)(lVar3 + 0x2c));
    lVar3 = *(long *)(lVar5 + 0x10);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      pdVar6 = (double *)(lVar5 + 0x20);
      do {
        if ((param_1 - dVar8 <= *pdVar6) && (bVar2 = SCARRY8(lVar4,1), lVar4 = lVar4 + 1, bVar2)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100316e24);
          (*pcVar1)();
        }
        pdVar6 = pdVar6 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    bVar2 = (long)dVar7 <= lVar4;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

