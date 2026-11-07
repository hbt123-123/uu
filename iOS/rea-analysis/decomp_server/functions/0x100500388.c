// rea decompile_all
// name: FUN_100500388
// address: 0x100500388
// body: available
// range: 0x100500388-0x1005004df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100500388(ulong *param_1)

{
  long lVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  undefined1 uVar9;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar10;
  
  if ((*(char *)((long)unaff_x20 + 0x21) == '\x02') &&
     (puVar3 = param_1, FUN_1004fdea4(), unaff_x21 == 0)) {
    if (puVar3 < (ulong *)0x7fffffff) {
      puVar7 = (ulong *)unaff_x20[1];
      if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10050048c);
        (*pcVar2)();
      }
      if (puVar3 <= puVar7) {
        lVar8 = *unaff_x20;
        lVar6 = lVar8 + (long)puVar3;
        *unaff_x20 = lVar6;
        unaff_x20[1] = (long)puVar7 - (long)puVar3;
        FUN_1001f8534();
        uVar10 = *param_1;
        uVar4 = uVar10;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar5 = uVar10;
        if ((uVar4 & 1) == 0) {
          uVar5 = 0;
          FUN_1005077e0(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
        }
        uVar4 = *(ulong *)(uVar5 + 0x10);
        uVar10 = uVar5;
        if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
          uVar10 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
          FUN_1005077e0(uVar10,uVar4 + 1,1,uVar5);
        }
        *(ulong *)(uVar10 + 0x10) = uVar4 + 1;
        lVar1 = uVar10 + uVar4 * 0x10;
        *(long *)(lVar1 + 0x20) = lVar8;
        *(long *)(lVar1 + 0x28) = lVar6;
        *param_1 = uVar10;
        *(undefined1 *)(unaff_x20 + 4) = 1;
        return;
      }
      uVar9 = 1;
    }
    else {
      uVar9 = 3;
    }
    FUN_100506290();
    _swift_allocError(&DAT_1009cdf18,puVar3,0,0);
    *(undefined1 *)puVar3 = uVar9;
    _swift_willThrow();
  }
  return;
}

