// rea decompile_all
// name: FUN_1005264b0
// address: 0x1005264b0
// body: available
// range: 0x1005264b0-0x1005266db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005264b0(ulong *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
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
    if (lVar7 != 0) goto LAB_1005264f4;
  }
  else if (lVar7 != lVar2 - lVar9) {
LAB_1005264f4:
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
  puVar5 = (undefined8 *)0x5b;
  FUN_1005363c8();
  if (unaff_x21 != 0) {
    return;
  }
  FUN_100535660();
  lVar7 = unaff_x20[2];
  if (lVar9 == 0) {
    if (lVar7 == 0) goto LAB_1005265a8;
  }
  else if (lVar7 == lVar2 - lVar9) goto LAB_1005265a8;
  if (*(char *)(lVar9 + lVar7) == ']') {
    lVar1 = 0;
    if (lVar9 != 0) {
      lVar1 = lVar2 - lVar9;
    }
    if ((lVar7 < 0) || (lVar1 <= lVar7)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005266d8);
      (*pcVar3)();
    }
LAB_1005266c8:
    unaff_x20[2] = lVar7 + 1;
    return;
  }
LAB_1005265a8:
  do {
    FUN_1005341bc();
    if ((ulong)puVar5 >> 0x20 != 0) {
      FUN_1004f98e4();
      _swift_allocError(&DAT_1009d03a0,puVar5,0,0);
      puVar5[1] = 2;
      *puVar5 = 0;
      _swift_willThrow();
      return;
    }
    uVar8 = *param_1;
    uVar4 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = uVar8;
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
      FUN_1005076c8(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
    }
    uVar4 = *(ulong *)(uVar6 + 0x10);
    uVar8 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar4) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_1005076c8(uVar8,uVar4 + 1,1,uVar6);
    }
    *(ulong *)(uVar8 + 0x10) = uVar4 + 1;
    *(int *)(uVar8 + uVar4 * 4 + 0x20) = (int)puVar5;
    *param_1 = uVar8;
    FUN_100535660();
    lVar7 = unaff_x20[2];
    if (lVar9 == 0) {
      if (lVar7 != 0) goto LAB_1005265bc;
    }
    else if (lVar7 != lVar2 - lVar9) {
LAB_1005265bc:
      if (*(char *)(lVar9 + lVar7) == ']') {
        lVar1 = 0;
        if (lVar9 != 0) {
          lVar1 = lVar2 - lVar9;
        }
        if ((lVar7 < 0) || (lVar1 <= lVar7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1005266dc);
          (*pcVar3)();
        }
        goto LAB_1005266c8;
      }
    }
    puVar5 = (undefined8 *)0x2c;
    FUN_1005363c8();
  } while( true );
}

