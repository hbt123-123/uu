// rea decompile_all
// name: FUN_100526700
// address: 0x100526700
// body: available
// range: 0x100526700-0x10052690b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100526700(ulong *param_1,code *param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  
  FUN_100535660();
  lVar2 = unaff_x20[1];
  lVar7 = unaff_x20[2];
  lVar9 = *unaff_x20;
  if (lVar9 == 0) {
    if (lVar7 != 0) goto LAB_100526750;
  }
  else if (lVar7 != lVar2 - lVar9) {
LAB_100526750:
    if (*(char *)(lVar9 + lVar7) == 'n') {
      uVar4 = 0;
      FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
      _swift_initStaticObject();
      FUN_100536178();
      if ((uVar4 & 1) != 0) {
        return;
      }
    }
  }
  uVar5 = 0x5b;
  FUN_1005363c8();
  if (unaff_x21 != 0) {
    return;
  }
  FUN_100535660();
  lVar7 = unaff_x20[2];
  if (lVar9 == 0) {
    if (lVar7 == 0) goto LAB_1005267f0;
  }
  else if (lVar7 == lVar2 - lVar9) goto LAB_1005267f0;
  if (*(char *)(lVar9 + lVar7) == ']') {
    lVar1 = 0;
    if (lVar9 != 0) {
      lVar1 = lVar2 - lVar9;
    }
    if ((lVar7 < 0) || (lVar1 <= lVar7)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100526908);
      (*pcVar3)();
    }
LAB_1005268e0:
    unaff_x20[2] = lVar7 + 1;
    return;
  }
LAB_1005267f0:
  do {
    (*param_2)();
    uVar8 = *param_1;
    uVar4 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = uVar8;
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
      (*param_3)(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
    }
    uVar4 = *(ulong *)(uVar6 + 0x10);
    uVar8 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar4) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      (*param_3)(uVar8,uVar4 + 1,1,uVar6);
    }
    *(ulong *)(uVar8 + 0x10) = uVar4 + 1;
    *(undefined8 *)(uVar8 + uVar4 * 8 + 0x20) = uVar5;
    *param_1 = uVar8;
    FUN_100535660();
    lVar7 = unaff_x20[2];
    if (lVar9 == 0) {
      if (lVar7 != 0) goto LAB_100526808;
    }
    else if (lVar7 != lVar2 - lVar9) {
LAB_100526808:
      if (*(char *)(lVar9 + lVar7) == ']') break;
    }
    uVar5 = 0x2c;
    FUN_1005363c8();
  } while( true );
  lVar1 = 0;
  if (lVar9 != 0) {
    lVar1 = lVar2 - lVar9;
  }
  if ((lVar7 < 0) || (lVar1 <= lVar7)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10052690c);
    (*pcVar3)();
  }
  goto LAB_1005268e0;
}

