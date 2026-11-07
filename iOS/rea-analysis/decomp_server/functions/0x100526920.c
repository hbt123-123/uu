// rea decompile_all
// name: FUN_100526920
// address: 0x100526920
// body: available
// range: 0x100526920-0x100526b07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100526920(ulong *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar9;
  long lVar10;
  
  FUN_100535660();
  lVar2 = unaff_x20[1];
  lVar8 = unaff_x20[2];
  lVar10 = *unaff_x20;
  if (lVar10 == 0) {
    if (lVar8 != 0) goto LAB_100526964;
  }
  else if (lVar8 != lVar2 - lVar10) {
LAB_100526964:
    if (*(char *)(lVar10 + lVar8) == 'n') {
      uVar5 = 0;
      FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
      _swift_initStaticObject();
      FUN_100536178();
      if ((uVar5 & 1) != 0) {
        return;
      }
    }
  }
  uVar6 = 0x5b;
  FUN_1005363c8();
  if (unaff_x21 != 0) {
    return;
  }
  FUN_100535660();
  lVar8 = unaff_x20[2];
  if (lVar10 == 0) {
    if (lVar8 == 0) goto LAB_100526a00;
  }
  else if (lVar8 == lVar2 - lVar10) goto LAB_100526a00;
  if (*(char *)(lVar10 + lVar8) == ']') {
    lVar1 = 0;
    if (lVar10 != 0) {
      lVar1 = lVar2 - lVar10;
    }
    if ((lVar8 < 0) || (lVar1 <= lVar8)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100526b04);
      (*pcVar3)();
    }
LAB_100526ae0:
    unaff_x20[2] = lVar8 + 1;
    return;
  }
LAB_100526a00:
  do {
    bVar4 = (byte)uVar6;
    FUN_100533c30();
    uVar9 = *param_1;
    uVar5 = uVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar7 = uVar9;
    if ((uVar5 & 1) == 0) {
      uVar7 = 0;
      FUN_1005076f0(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
    }
    uVar5 = *(ulong *)(uVar7 + 0x10);
    uVar9 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar5) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_1005076f0(uVar9,uVar5 + 1,1,uVar7);
    }
    *(ulong *)(uVar9 + 0x10) = uVar5 + 1;
    *(byte *)(uVar9 + uVar5 + 0x20) = bVar4 & 1;
    *param_1 = uVar9;
    FUN_100535660();
    lVar8 = unaff_x20[2];
    if (lVar10 == 0) {
      if (lVar8 != 0) goto LAB_100526a14;
    }
    else if (lVar8 != lVar2 - lVar10) {
LAB_100526a14:
      if (*(char *)(lVar10 + lVar8) == ']') break;
    }
    uVar6 = 0;
    FUN_1005363c8();
  } while( true );
  lVar1 = 0;
  if (lVar10 != 0) {
    lVar1 = lVar2 - lVar10;
  }
  if ((lVar8 < 0) || (lVar1 <= lVar8)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100526b08);
    (*pcVar3)();
  }
  goto LAB_100526ae0;
}

