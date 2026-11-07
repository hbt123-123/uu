// rea decompile_all
// name: FUN_100525fe0
// address: 0x100525fe0
// body: available
// range: 0x100525fe0-0x1005261cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100525fe0(undefined8 param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  FUN_100535660();
  lVar2 = unaff_x20[1];
  lVar6 = unaff_x20[2];
  lVar8 = *unaff_x20;
  if (lVar8 == 0) {
    if (lVar6 != 0) goto LAB_100526028;
  }
  else if (lVar6 != lVar2 - lVar8) {
LAB_100526028:
    if (*(char *)(lVar8 + lVar6) == 'n') {
      uVar4 = 0;
      FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
      _swift_initStaticObject();
      FUN_100536178();
      if ((uVar4 & 1) != 0) {
        return;
      }
    }
  }
  FUN_1005363c8(0x5b);
  if (unaff_x21 != 0) {
    return;
  }
  FUN_100535660();
  lVar6 = unaff_x20[2];
  if (lVar8 == 0) {
    if (lVar6 == 0) goto LAB_1005260c4;
  }
  else if (lVar6 == lVar2 - lVar8) goto LAB_1005260c4;
  if (*(char *)(lVar8 + lVar6) == ']') {
    lVar1 = 0;
    if (lVar8 != 0) {
      lVar1 = lVar2 - lVar8;
    }
    if ((lVar6 < 0) || (lVar1 <= lVar6)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005261c8);
      (*pcVar3)();
    }
LAB_1005261a0:
    unaff_x20[2] = lVar6 + 1;
    return;
  }
LAB_1005260c4:
  do {
    FUN_1005337cc();
    uVar7 = *param_2;
    uVar4 = uVar7;
    uVar9 = param_1;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar5 = uVar7;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
      FUN_1005075b4(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar4 = *(ulong *)(uVar5 + 0x10);
    uVar7 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_1005075b4(uVar7,uVar4 + 1,1,uVar5);
    }
    *(ulong *)(uVar7 + 0x10) = uVar4 + 1;
    *(undefined8 *)(uVar7 + uVar4 * 8 + 0x20) = param_1;
    *param_2 = uVar7;
    FUN_100535660();
    lVar6 = unaff_x20[2];
    if (lVar8 == 0) {
      if (lVar6 != 0) goto LAB_1005260d8;
    }
    else if (lVar6 != lVar2 - lVar8) {
LAB_1005260d8:
      if (*(char *)(lVar8 + lVar6) == ']') break;
    }
    FUN_1005363c8(0x2c);
    param_1 = uVar9;
  } while( true );
  lVar1 = 0;
  if (lVar8 != 0) {
    lVar1 = lVar2 - lVar8;
  }
  if ((lVar6 < 0) || (lVar1 <= lVar6)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1005261cc);
    (*pcVar3)();
  }
  goto LAB_1005261a0;
}

