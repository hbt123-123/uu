// rea decompile_all
// name: FUN_1005002b4
// address: 0x1005002b4
// body: available
// range: 0x1005002b4-0x100500387 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005002b4(long *param_1,code *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x20;
  long unaff_x21;
  undefined1 uVar6;
  
  if ((*(char *)((long)unaff_x20 + 0x21) == '\x02') &&
     (plVar2 = param_1, FUN_1004fdea4(), unaff_x21 == 0)) {
    if (plVar2 < (long *)0x7fffffff) {
      plVar5 = (long *)unaff_x20[1];
      if ((long)plVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100500388);
        (*pcVar1)();
      }
      uVar6 = 1;
      if (plVar2 <= plVar5) {
        (*param_2)(*param_1,param_1[1]);
        lVar3 = *unaff_x20;
        lVar4 = lVar3 + (long)plVar2;
        *unaff_x20 = lVar4;
        unaff_x20[1] = (long)plVar5 - (long)plVar2;
        FUN_1001f8534();
        *param_1 = lVar3;
        param_1[1] = lVar4;
        *(undefined1 *)(unaff_x20 + 4) = 1;
        return;
      }
    }
    else {
      uVar6 = 3;
    }
    FUN_100506290();
    _swift_allocError(&DAT_1009cdf18,plVar2,0,0);
    *(undefined1 *)plVar2 = uVar6;
    _swift_willThrow();
  }
  return;
}

