// rea decompile_all
// name: FUN_1006675fc
// address: 0x1006675fc
// body: available
// range: 0x1006675fc-0x10066790b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006675fc(long *param_1,long param_2,undefined1 *param_3,undefined *param_4,ulong param_5,
                  uint param_6,ulong param_7)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  uint uVar8;
  long unaff_x21;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar8 = (uint)param_7;
  if (*(long *)(param_2 + 0x10) == 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease();
    FUN_100667c30();
    _swift_allocError(&DAT_1009e4950,param_3,0,0);
    *param_3 = 0;
    goto LAB_100667834;
  }
  uVar3 = uVar8 >> 6 & 3;
  cVar2 = (char)param_7;
  if ((param_6 & 1) == 0) {
    dVar9 = (double)(long)param_5;
    if (uVar3 == 0) goto LAB_1006676c8;
    if (uVar3 == 1) goto LAB_10066775c;
LAB_10066771c:
    uVar8 = uVar8 & 0xff;
    if (uVar8 < 0x82) {
      dVar11 = 20.0;
      if (uVar8 == 0x80) {
        dVar11 = 16.0;
      }
    }
    else if (uVar8 == 0x82) {
LAB_1006677a4:
      dVar11 = 32.0;
    }
    else if (uVar8 == 0x83) {
LAB_100667780:
      dVar11 = 48.0;
    }
    else {
LAB_100667738:
      dVar11 = 64.0;
    }
  }
  else if (uVar3 == 0) {
    param_5 = *(ulong *)(&DAT_10084bdd0 + (long)cVar2 * 8);
    dVar9 = (double)param_5;
LAB_1006676c8:
    dVar11 = 48.0;
    if ((uVar8 & 0xff) != 2) {
      dVar11 = 64.0;
    }
    dVar10 = 28.0;
    if ((param_7 & 0xff) != 0) {
      dVar10 = 32.0;
    }
    if ((uVar8 & 0xff) < 2) {
      dVar11 = dVar10;
    }
  }
  else {
    if (uVar3 != 1) {
      param_5 = *(ulong *)(&DAT_10084bd70 + ((long)cVar2 ^ 0x1fffffffffffff80U) * 8);
      dVar9 = (double)param_5;
      goto LAB_10066771c;
    }
    if ((uVar8 & 0x3f) < 7) {
      param_5 = *(ulong *)(&DAT_10084bd98 + (ulong)(uVar8 & 0x3f) * 8);
    }
    else {
      param_5 = 0x40;
    }
    dVar9 = (double)param_5;
LAB_10066775c:
    uVar8 = uVar8 & 0x3f;
    dVar11 = 28.0;
    if (uVar8 < 4) {
      if ((param_7 & 0x3f) != 0) {
        if (uVar8 != 1) {
          if (uVar8 != 2) goto LAB_100667738;
          goto LAB_100667780;
        }
        goto LAB_1006677a4;
      }
    }
    else if (uVar8 != 4) {
      if (uVar8 == 5) goto LAB_1006677a4;
      if (uVar8 == 6) goto LAB_100667780;
      goto LAB_100667738;
    }
  }
  dVar9 = (double)(long)(dVar9 / dVar11);
  if (0x7fefffffffffffff < (ulong)ABS(dVar9)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100667904);
    (*pcVar4)();
  }
  if (dVar9 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100667908);
    (*pcVar4)();
  }
  if (9.223372036854776e+18 <= dVar9) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10066790c);
    (*pcVar4)();
  }
  if ((long)dVar9 < 0x100) {
    puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (param_3 != (undefined1 *)0x0) {
      puVar6 = param_3;
    }
    uVar5 = 0;
    FUN_100668800(0);
    _swift_initStackObject();
    FUN_100668564(puVar6,param_7,uVar5);
    lVar7 = param_2;
    FUN_100667eb0();
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(param_2);
    if (unaff_x21 != 0) {
      _swift_bridgeObjectRelease(param_4);
      return;
    }
    puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (param_4 != (undefined *)0x0) {
      puVar1 = param_4;
    }
    *param_1 = (long)dVar9;
    param_1[1] = param_5;
    param_1[2] = (long)puVar1;
    param_1[3] = lVar7;
    *(char *)(param_1 + 4) = cVar2;
    return;
  }
  _swift_bridgeObjectRelease();
  _swift_bridgeObjectRelease(param_4);
  _swift_bridgeObjectRelease();
  FUN_100667c30();
  _swift_allocError(&DAT_1009e4950,param_3,0,0);
  *param_3 = 1;
LAB_100667834:
  _swift_willThrow();
  return;
}

