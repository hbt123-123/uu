// rea decompile_all
// name: FUN_100526b08
// address: 0x100526b08
// body: available
// range: 0x100526b08-0x100526d7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100526b08(ulong *param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  
  FUN_100535660();
  lVar9 = unaff_x20[1];
  lVar8 = unaff_x20[2];
  lVar11 = *unaff_x20;
  if (lVar11 == 0) {
    if (lVar8 != 0) goto LAB_100526b50;
  }
  else if (lVar8 != lVar9 - lVar11) {
LAB_100526b50:
    if (*(char *)(lVar11 + lVar8) == 'n') {
      uVar4 = 0;
      FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
      param_2 = &DAT_100aa8b50;
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
  lVar8 = unaff_x20[2];
  if (lVar11 == 0) {
    if (lVar8 == 0) goto LAB_100526be0;
  }
  else if (lVar8 == lVar9 - lVar11) goto LAB_100526be0;
  if (*(char *)(lVar11 + lVar8) == ']') {
    lVar2 = 0;
    if (lVar11 != 0) {
      lVar2 = lVar9 - lVar11;
    }
    if ((lVar8 < 0) || (lVar2 <= lVar8)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100526be0);
      (*pcVar3)();
    }
LAB_100526d54:
    unaff_x20[2] = lVar8 + 1;
    return;
  }
LAB_100526be0:
  lVar9 = lVar9 - lVar11;
  do {
    FUN_100535660();
    lVar8 = unaff_x20[2];
    if (lVar11 == 0) {
      if (lVar8 == 0) goto LAB_100526d04;
    }
    else if (lVar8 == lVar9) {
LAB_100526d04:
      FUN_1004f98e4();
      _swift_allocError(&DAT_1009d03a0,puVar5,0,0);
      uVar12 = 0xd;
      goto LAB_100526d2c;
    }
    if ((*(char *)(lVar11 + lVar8) != '\"') || (FUN_100535e6c(), param_2 == (undefined *)0x0)) {
      FUN_1004f98e4();
      _swift_allocError(&DAT_1009d03a0,puVar5,0,0);
      uVar12 = 5;
LAB_100526d2c:
      puVar5[1] = uVar12;
      *puVar5 = 0;
      _swift_willThrow();
      return;
    }
    uVar10 = *param_1;
    uVar4 = uVar10;
    puVar7 = param_2;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = uVar10;
    if ((uVar4 & 1) == 0) {
      puVar7 = (undefined *)(*(long *)(uVar10 + 0x10) + 1);
      uVar6 = 0;
      FUN_100507174(0,puVar7,1,uVar10);
    }
    uVar4 = *(ulong *)(uVar6 + 0x10);
    puVar1 = (undefined *)(uVar4 + 1);
    uVar10 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar4) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      puVar7 = puVar1;
      FUN_100507174(uVar10,puVar1,1,uVar6);
    }
    *(undefined **)(uVar10 + 0x10) = puVar1;
    lVar8 = uVar10 + uVar4 * 0x10;
    *(undefined8 **)(lVar8 + 0x20) = puVar5;
    *(undefined **)(lVar8 + 0x28) = param_2;
    *param_1 = uVar10;
    FUN_100535660();
    lVar8 = unaff_x20[2];
    if (lVar11 == 0) {
      if (lVar8 != 0) goto LAB_100526bf0;
    }
    else if (lVar8 != lVar9) {
LAB_100526bf0:
      if (*(char *)(lVar11 + lVar8) == ']') break;
    }
    puVar5 = (undefined8 *)0x2c;
    FUN_1005363c8();
    param_2 = puVar7;
  } while( true );
  lVar2 = 0;
  if (lVar11 != 0) {
    lVar2 = lVar9;
  }
  if ((lVar8 < 0) || (lVar2 <= lVar8)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100526d80);
    (*pcVar3)();
  }
  goto LAB_100526d54;
}

