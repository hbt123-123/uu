// rea decompile_all
// name: FUN_1004fffc4
// address: 0x1004fffc4
// body: available
// range: 0x1004fffc4-0x1005000df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fffc4(ulong *param_1)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined1 uVar4;
  ulong *puVar5;
  ulong *unaff_x20;
  long unaff_x21;
  
  if ((*(char *)((long)unaff_x20 + 0x21) == '\x02') &&
     (puVar2 = param_1, FUN_1004fdea4(), unaff_x21 == 0)) {
    if (puVar2 < (ulong *)0x7fffffff) {
      puVar5 = (ulong *)unaff_x20[1];
      if ((long)puVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005000e0);
        (*pcVar1)();
      }
      if (puVar5 < puVar2) {
        FUN_100506290();
        _swift_allocError(&DAT_1009cdf18,puVar2,0,0);
        uVar4 = 1;
      }
      else {
        puVar3 = (ulong *)*unaff_x20;
        *unaff_x20 = (long)puVar3 + (long)puVar2;
        unaff_x20[1] = (long)puVar5 - (long)puVar2;
        FUN_10054c680();
        if (puVar2 != (ulong *)0x0) {
          _swift_bridgeObjectRelease(param_1[1]);
          *param_1 = (ulong)puVar3;
          param_1[1] = (ulong)puVar2;
          *(undefined1 *)(unaff_x20 + 4) = 1;
          return;
        }
        FUN_100506290();
        _swift_allocError(&DAT_1009cdf18,puVar3,0,0);
        uVar4 = 2;
        puVar2 = puVar3;
      }
    }
    else {
      FUN_100506290();
      _swift_allocError(&DAT_1009cdf18,puVar2,0,0);
      uVar4 = 3;
    }
    *(undefined1 *)puVar2 = uVar4;
    _swift_willThrow();
  }
  return;
}

