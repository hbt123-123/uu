// rea decompile_all
// name: FUN_100536528
// address: 0x100536528
// body: available
// range: 0x100536528-0x1005367cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100536528(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long lVar9;
  
  FUN_100535660();
  lVar8 = 0;
LAB_10053655c:
  lVar9 = 0;
  lVar1 = *unaff_x20;
  lVar7 = unaff_x20[1] - lVar1;
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = lVar7;
  }
  while( true ) {
    FUN_100535660();
    lVar6 = unaff_x20[2];
    if (lVar1 == 0) {
      if (lVar6 == 0) goto LAB_100536740;
    }
    else if (lVar6 == lVar7) goto LAB_100536740;
    bVar3 = *(byte *)(lVar1 + lVar6);
    if (bVar3 != 0x5b) break;
    if ((lVar6 < 0) || (lVar2 <= lVar6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100536794);
      (*pcVar4)();
    }
    unaff_x20[2] = lVar6 + 1;
    bVar5 = SCARRY8(lVar9,1);
    lVar9 = lVar9 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100536798);
      (*pcVar4)();
    }
  }
  if (bVar3 < 0x6e) {
    if (bVar3 == 0x22) {
      FUN_10053684c();
    }
    else {
      if (bVar3 == 0x5d) {
        if (lVar9 == 0) {
          FUN_1004f98e4();
          _swift_allocError(&DAT_1009d03a0,param_1,0,0);
          *param_1 = 0;
          param_1[1] = 0;
          goto LAB_10053676c;
        }
        do {
          FUN_100535660();
          lVar6 = unaff_x20[2];
          if (lVar1 == 0) {
            if (lVar6 == 0) goto LAB_1005366c0;
          }
          else if (lVar6 == lVar7) goto LAB_1005366c0;
          if (*(char *)(lVar1 + lVar6) != ']') goto LAB_1005366c0;
          if ((lVar6 < 0) || (lVar2 <= lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1005367c8);
            (*pcVar4)();
          }
          unaff_x20[2] = lVar6 + 1;
          lVar6 = lVar9 + -1;
          bVar5 = 0 < lVar9;
          lVar9 = lVar6;
        } while (lVar6 != 0 && bVar5);
        lVar9 = 0;
        goto LAB_1005366c0;
      }
      if (bVar3 == 0x66) {
        param_1 = (undefined8 *)&DAT_100aaa100;
        FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
        goto LAB_1005366b4;
      }
LAB_10053663c:
      FUN_1005337cc();
    }
LAB_100536644:
    if (unaff_x21 != 0) {
      return;
    }
  }
  else {
    if (bVar3 == 0x6e) {
      param_1 = (undefined8 *)&DAT_100aaa100;
      FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
    }
    else {
      if (bVar3 != 0x74) {
        if (bVar3 != 0x7b) goto LAB_10053663c;
        FUN_100536984();
        goto LAB_100536644;
      }
      param_1 = (undefined8 *)&DAT_100aaa100;
      FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
    }
LAB_1005366b4:
    _swift_initStaticObject();
    FUN_100536178();
    if (((ulong)param_1 & 1) == 0) {
LAB_100536740:
      FUN_1004f98e4();
      _swift_allocError(&DAT_1009d03a0,param_1,0,0);
      param_1[1] = 0xd;
      *param_1 = 0;
LAB_10053676c:
      _swift_willThrow();
      return;
    }
  }
LAB_1005366c0:
  bVar5 = SCARRY8(lVar8,lVar9);
  lVar8 = lVar8 + lVar9;
  if (bVar5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1005367cc);
    (*pcVar4)();
  }
  if (lVar8 < 1) {
    return;
  }
  lVar2 = *unaff_x20;
  lVar1 = unaff_x20[1];
  lVar9 = 0;
  if (lVar2 != 0) {
    lVar9 = lVar1 - lVar2;
  }
  do {
    FUN_100535660();
    lVar7 = unaff_x20[2];
    if (lVar2 == 0) {
      if (lVar7 == 0) break;
    }
    else if (lVar7 == lVar1 - lVar2) break;
    if (*(char *)(lVar2 + lVar7) != ']') break;
    if ((lVar7 < 0) || (lVar9 <= lVar7)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10053679c);
      (*pcVar4)();
    }
    unaff_x20[2] = lVar7 + 1;
    lVar7 = lVar8 + -1;
    bVar5 = lVar8 < 1;
    lVar8 = lVar7;
    if (lVar7 == 0 || bVar5) {
      return;
    }
  } while( true );
  param_1 = (undefined8 *)0x2c;
  FUN_1005363c8();
  if (unaff_x21 != 0) {
    return;
  }
  goto LAB_10053655c;
}

