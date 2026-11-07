// rea decompile_all
// name: FUN_100526260
// address: 0x100526260
// body: available
// range: 0x100526260-0x10052648b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100526260(ulong *param_1)

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
    if (lVar7 != 0) goto LAB_1005262a4;
  }
  else if (lVar7 != lVar2 - lVar9) {
LAB_1005262a4:
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
    if (lVar7 == 0) goto LAB_100526358;
  }
  else if (lVar7 == lVar2 - lVar9) goto LAB_100526358;
  if (*(char *)(lVar9 + lVar7) == ']') {
    lVar1 = 0;
    if (lVar9 != 0) {
      lVar1 = lVar2 - lVar9;
    }
    if ((lVar7 < 0) || (lVar1 <= lVar7)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100526488);
      (*pcVar3)();
    }
LAB_100526478:
    unaff_x20[2] = lVar7 + 1;
    return;
  }
LAB_100526358:
  do {
    FUN_1005341a0();
    if (puVar5 != (undefined8 *)(long)(int)puVar5) {
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
      FUN_1005074a0(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
    }
    uVar4 = *(ulong *)(uVar6 + 0x10);
    uVar8 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar4) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_1005074a0(uVar8,uVar4 + 1,1,uVar6);
    }
    *(ulong *)(uVar8 + 0x10) = uVar4 + 1;
    *(int *)(uVar8 + uVar4 * 4 + 0x20) = (int)puVar5;
    *param_1 = uVar8;
    FUN_100535660();
    lVar7 = unaff_x20[2];
    if (lVar9 == 0) {
      if (lVar7 != 0) goto LAB_10052636c;
    }
    else if (lVar7 != lVar2 - lVar9) {
LAB_10052636c:
      if (*(char *)(lVar9 + lVar7) == ']') {
        lVar1 = 0;
        if (lVar9 != 0) {
          lVar1 = lVar2 - lVar9;
        }
        if ((lVar7 < 0) || (lVar1 <= lVar7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10052648c);
          (*pcVar3)();
        }
        goto LAB_100526478;
      }
    }
    puVar5 = (undefined8 *)0x2c;
    FUN_1005363c8();
  } while( true );
}

