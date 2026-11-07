// rea decompile_all
// name: FUN_10003a2fc
// address: 0x10003a2fc
// body: available
// range: 0x10003a2fc-0x10003a71f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10003a2fc(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined1 auStack_78 [24];
  long *local_58;
  
  lVar7 = (long)param_2 - (long)param_1;
  lVar10 = lVar7 + 0xf;
  if (-1 < lVar7) {
    lVar10 = lVar7;
  }
  lVar10 = lVar10 >> 4;
  lVar8 = (long)param_3 - (long)param_2;
  lVar11 = lVar8 + 0xf;
  if (-1 < lVar8) {
    lVar11 = lVar8;
  }
  lVar11 = lVar11 >> 4;
  if (lVar10 < lVar11) {
    if ((param_4 != param_1) || (param_1 + lVar10 * 2 <= param_4)) {
      _memmove(param_4,param_1,lVar10 << 4);
    }
    local_58 = param_4 + lVar10 * 2;
    plVar4 = param_1;
    if (0xf < lVar7) {
      do {
        if (param_3 <= param_2) break;
        lVar10 = *param_2;
        lVar7 = *param_4;
        lVar11 = param_4[1];
        FUN_1003d541c(lVar11);
        puVar2 = auStack_78;
        _swift_beginAccess(param_5 + 0x80,puVar2,0x20,0);
        uVar9 = (uint)puVar2;
        if (*(long *)(*(long *)(param_5 + 0x80) + 0x10) == 0) {
          uVar9 = 0;
        }
        else {
          thunk_FUN_1001a2c34(lVar11);
        }
        puVar2 = auStack_78;
        _swift_endAccess(puVar2);
        FUN_1003d541c();
        puVar3 = auStack_78;
        _swift_beginAccess(param_5 + 0x80,puVar3,0x20,0);
        if (*(long *)(*(long *)(param_5 + 0x80) + 0x10) == 0) {
          _swift_endAccess(auStack_78);
LAB_10003a4cc:
          if ((uVar9 & 1) != 0 || lVar10 < lVar7) goto LAB_10003a4e4;
LAB_10003a3a4:
          plVar5 = param_4 + 2;
          plVar13 = param_2;
          plVar12 = param_4;
        }
        else {
          thunk_FUN_1001a2c34(puVar2);
          _swift_endAccess(auStack_78);
          if (((ulong)puVar3 & 1) == 0) goto LAB_10003a4cc;
          if ((uVar9 & lVar10 < lVar7) == 0) goto LAB_10003a3a4;
LAB_10003a4e4:
          plVar5 = param_4;
          plVar13 = param_2 + 2;
          plVar12 = param_2;
        }
        param_2 = plVar13;
        param_4 = plVar5;
        if (plVar4 != plVar12) {
          lVar10 = *plVar12;
          plVar4[1] = plVar12[1];
          *plVar4 = lVar10;
        }
        plVar4 = plVar4 + 2;
      } while (param_4 < local_58);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar11 * 2 <= param_4)) {
      _memmove(param_4,param_2,lVar11 << 4);
    }
    local_58 = param_4 + lVar11 * 2;
    plVar4 = param_2;
    if ((0xf < lVar8) && (param_1 < param_2)) {
LAB_10003a540:
      plVar5 = param_2 + -2;
      plVar12 = param_3;
      do {
        plVar13 = local_58 + -2;
        lVar10 = *plVar13;
        lVar7 = param_2[-2];
        lVar11 = param_2[-1];
        FUN_1003d541c(lVar11);
        puVar2 = auStack_78;
        _swift_beginAccess(param_5 + 0x80,puVar2,0x20,0);
        uVar9 = (uint)puVar2;
        if (*(long *)(*(long *)(param_5 + 0x80) + 0x10) == 0) {
          uVar9 = 1;
        }
        else {
          thunk_FUN_1001a2c34(lVar11);
          uVar9 = uVar9 ^ 1;
        }
        puVar2 = auStack_78;
        _swift_endAccess(puVar2);
        FUN_1003d541c();
        puVar3 = auStack_78;
        _swift_beginAccess(param_5 + 0x80,puVar3,0x20,0);
        if (*(long *)(*(long *)(param_5 + 0x80) + 0x10) == 0) {
          _swift_endAccess(auStack_78);
LAB_10003a64c:
          if ((uVar9 & 1) == 0) goto LAB_10003a680;
LAB_10003a654:
          if (lVar10 < lVar7) goto LAB_10003a680;
        }
        else {
          thunk_FUN_1001a2c34(puVar2);
          _swift_endAccess(auStack_78);
          if (((ulong)puVar3 & 1) == 0) goto LAB_10003a64c;
          if ((uVar9 & 1) == 0) goto LAB_10003a654;
        }
        if (local_58 != plVar12) {
          lVar10 = *plVar13;
          plVar12[-1] = local_58[-1];
          plVar12[-2] = lVar10;
        }
        plVar4 = param_2;
        plVar12 = plVar12 + -2;
        local_58 = plVar13;
        if (plVar13 <= param_4) break;
      } while( true );
    }
  }
LAB_10003a6b8:
  uVar6 = (long)local_58 - (long)param_4;
  uVar1 = uVar6 + 0xf;
  if (-1 < (long)uVar6) {
    uVar1 = uVar6;
  }
  if ((plVar4 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff0)) <= plVar4)) {
    _memmove(plVar4,param_4,((long)uVar1 >> 4) << 4);
  }
  return 1;
LAB_10003a680:
  param_3 = plVar12 + -2;
  if (plVar12 != param_2) {
    lVar10 = *plVar5;
    plVar12[-1] = param_2[-1];
    *param_3 = lVar10;
  }
  plVar4 = plVar5;
  if ((local_58 <= param_4) || (param_2 = plVar5, plVar5 <= param_1)) goto LAB_10003a6b8;
  goto LAB_10003a540;
}

