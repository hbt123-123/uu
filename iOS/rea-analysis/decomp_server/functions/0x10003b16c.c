// rea decompile_all
// name: FUN_10003b16c
// address: 0x10003b16c
// body: available
// range: 0x10003b16c-0x10003b33b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_10003b16c(long param_1,long param_2,long param_3,long *param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined1 auStack_78 [24];
  
  if (param_3 != param_2) {
    lVar7 = *param_4;
    plVar9 = (long *)(lVar7 + param_3 * 0x10);
    lVar11 = param_1 - param_3;
    do {
      lVar8 = *(long *)(lVar7 + param_3 * 0x10);
      plVar10 = plVar9;
      lVar12 = lVar11;
      do {
        lVar1 = plVar10[-2];
        lVar4 = plVar10[-1];
        FUN_1003d541c(lVar4);
        puVar5 = auStack_78;
        _swift_beginAccess(param_5 + 0x80,puVar5,0x20,0);
        uVar13 = (uint)puVar5;
        if (*(long *)(*(long *)(param_5 + 0x80) + 0x10) == 0) {
          uVar13 = 0;
        }
        else {
          thunk_FUN_1001a2c34(lVar4);
        }
        puVar5 = auStack_78;
        _swift_endAccess(puVar5);
        FUN_1003d541c();
        puVar6 = auStack_78;
        _swift_beginAccess(param_5 + 0x80,puVar6,0x20,0);
        if (*(long *)(*(long *)(param_5 + 0x80) + 0x10) == 0) {
          _swift_endAccess(auStack_78);
LAB_10003b2fc:
          param_1 = 0;
          if ((uVar13 & 1) == 0 && lVar1 <= lVar8) break;
        }
        else {
          thunk_FUN_1001a2c34(puVar5);
          _swift_endAccess(auStack_78);
          param_1 = 0;
          if (((ulong)puVar6 & 1) == 0) goto LAB_10003b2fc;
          if ((uVar13 & lVar8 < lVar1) == 0) break;
        }
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10003b33c);
          (*pcVar2)();
        }
        lVar8 = *plVar10;
        param_1 = plVar10[1];
        plVar10[1] = plVar10[-1];
        *plVar10 = plVar10[-2];
        plVar10[-1] = param_1;
        plVar10 = plVar10 + -2;
        *plVar10 = lVar8;
        bVar3 = lVar12 != -1;
        lVar12 = lVar12 + 1;
      } while (bVar3);
      param_3 = param_3 + 1;
      plVar9 = plVar9 + 2;
      lVar11 = lVar11 + -1;
    } while (param_3 != param_2);
  }
  return param_1;
}

