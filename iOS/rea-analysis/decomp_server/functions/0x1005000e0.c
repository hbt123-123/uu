// rea decompile_all
// name: FUN_1005000e0
// address: 0x1005000e0
// body: available
// range: 0x1005000e0-0x10050027b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005000e0(ulong *param_1)

{
  long lVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 uVar7;
  ulong *puVar8;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar9;
  
  if ((*(char *)((long)unaff_x20 + 0x21) == '\x02') &&
     (puVar3 = param_1, FUN_1004fdea4(), unaff_x21 == 0)) {
    if (puVar3 < (ulong *)0x7fffffff) {
      puVar8 = (ulong *)unaff_x20[1];
      if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100500228);
        (*pcVar2)();
      }
      if (puVar8 < puVar3) {
        FUN_100506290();
        _swift_allocError(&DAT_1009cdf18,puVar3,0,0);
        uVar7 = 1;
      }
      else {
        puVar4 = (ulong *)*unaff_x20;
        *unaff_x20 = (long)puVar4 + (long)puVar3;
        unaff_x20[1] = (long)puVar8 - (long)puVar3;
        FUN_10054c680();
        if (puVar3 != (ulong *)0x0) {
          uVar9 = *param_1;
          uVar5 = uVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar6 = uVar9;
          if ((uVar5 & 1) == 0) {
            uVar6 = 0;
            FUN_100507174(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
          }
          uVar5 = *(ulong *)(uVar6 + 0x10);
          uVar9 = uVar6;
          if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
            uVar9 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
            FUN_100507174(uVar9,uVar5 + 1,1,uVar6);
          }
          *(ulong *)(uVar9 + 0x10) = uVar5 + 1;
          lVar1 = uVar9 + uVar5 * 0x10;
          *(ulong **)(lVar1 + 0x20) = puVar4;
          *(ulong **)(lVar1 + 0x28) = puVar3;
          *param_1 = uVar9;
          *(undefined1 *)(unaff_x20 + 4) = 1;
          return;
        }
        FUN_100506290();
        _swift_allocError(&DAT_1009cdf18,puVar4,0,0);
        uVar7 = 2;
        puVar3 = puVar4;
      }
    }
    else {
      FUN_100506290();
      _swift_allocError(&DAT_1009cdf18,puVar3,0,0);
      uVar7 = 3;
    }
    *(undefined1 *)puVar3 = uVar7;
    _swift_willThrow();
  }
  return;
}

