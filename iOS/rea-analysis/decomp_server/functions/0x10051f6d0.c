// rea decompile_all
// name: FUN_10051f6d0
// address: 0x10051f6d0
// body: available
// range: 0x10051f6d0-0x10051faef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010051f9e8) */
/* WARNING: Removing unreachable block (ram,0x00010051f894) */

void FUN_10051f6d0(long *param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar10;
  ulong uVar11;
  
  FUN_100535660();
  lVar8 = param_1[1];
  lVar9 = param_1[2];
  lVar10 = *param_1;
  if (lVar10 == 0) {
    if (lVar9 != 0) goto LAB_10051f724;
  }
  else if (lVar9 != lVar8 - lVar10) {
LAB_10051f724:
    if (*(char *)(lVar10 + lVar9) == 'n') {
      uVar3 = 0;
      FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
      _swift_initStaticObject();
      FUN_100536178();
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
  }
  puVar4 = (undefined8 *)0x5b;
  FUN_1005363c8();
  if (unaff_x21 == 0) {
    lVar6 = param_1[0xb];
    lVar9 = lVar6 + -1;
    if (SBORROW8(lVar6,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10051fa94);
      (*pcVar2)();
    }
    param_1[0xb] = lVar9;
    if (lVar9 < 0) {
      FUN_1004f98e4();
      _swift_allocError(&DAT_1009d03a0,puVar4,0,0);
      puVar4[1] = 0x13;
      *puVar4 = 0;
      _swift_willThrow();
      return;
    }
    FUN_100535660();
    lVar7 = param_1[2];
    if (lVar10 == 0) {
      if (lVar7 == 0) goto LAB_10051f860;
    }
    else if (lVar7 == lVar8 - lVar10) goto LAB_10051f860;
    if (*(char *)(lVar10 + lVar7) != ']') {
LAB_10051f860:
      FUN_100523898(param_1);
      do {
        uVar11 = *unaff_x20;
        FUN_10051fe90(0,0,0x3000000000000000,0xff);
        FUN_100008184(0,0xc000000000000000);
        uVar3 = uVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar5 = uVar11;
        if ((uVar3 & 1) == 0) {
          uVar5 = 0;
          FUN_10050727c(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
        }
        uVar3 = *(ulong *)(uVar5 + 0x10);
        uVar11 = uVar5;
        if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
          uVar11 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
          FUN_10050727c(uVar11,uVar3 + 1,1,uVar5);
        }
        *(ulong *)(uVar11 + 0x10) = uVar3 + 1;
        lVar8 = uVar11 + uVar3 * 0x30;
        *(undefined8 *)(lVar8 + 0x20) = 0;
        *(undefined8 *)(lVar8 + 0x28) = 0;
        *(undefined8 *)(lVar8 + 0x30) = 0x3000000000000000;
        *(undefined1 *)(lVar8 + 0x38) = 0xff;
        *(undefined8 *)(lVar8 + 0x40) = 0;
        *(undefined8 *)(lVar8 + 0x48) = 0xc000000000000000;
        *unaff_x20 = uVar11;
        FUN_100535660();
        lVar8 = param_1[2];
        lVar9 = *param_1;
        if (lVar9 == 0) {
          if (lVar8 != 0) goto LAB_10051f978;
        }
        else if (lVar8 != param_1[1] - lVar9) {
LAB_10051f978:
          if (*(char *)(lVar9 + lVar8) == ']') goto LAB_10051fa2c;
        }
        FUN_1005363c8(0x2c);
        FUN_10051ff3c(0,0,0x3000000000000000,0xff);
        FUN_100006cdc(0,0xc000000000000000);
        FUN_100523898(param_1);
      } while( true );
    }
    lVar1 = 0;
    if (lVar10 != 0) {
      lVar1 = lVar8 - lVar10;
    }
    if ((lVar7 < 0) || (lVar1 <= lVar7)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10051fa98);
      (*pcVar2)();
    }
    param_1[2] = lVar7 + 1;
    if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10051fa9c);
      (*pcVar2)();
    }
    param_1[0xb] = lVar6;
    if (param_1[4] < lVar6) {
LAB_10051faa4:
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                ("Fatal error",0xb,2,0xd000000000000039,0x80000001008bc700,
                 "SwiftProtobuf/JSONScanner.swift",0x1f,2,0x1ab,0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10051faf0);
      (*pcVar2)();
    }
  }
  return;
LAB_10051fa2c:
  lVar10 = 0;
  if (lVar9 != 0) {
    lVar10 = param_1[1] - lVar9;
  }
  if ((lVar8 < 0) || (lVar10 <= lVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10051faa0);
    (*pcVar2)();
  }
  param_1[2] = lVar8 + 1;
  lVar8 = param_1[0xb] + 1;
  if (SCARRY8(param_1[0xb],1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10051faa4);
    (*pcVar2)();
  }
  param_1[0xb] = lVar8;
  if (lVar8 <= param_1[4]) {
    FUN_10051ff3c(0,0,0x3000000000000000,0xff);
    FUN_100006cdc(0,0xc000000000000000);
    return;
  }
  goto LAB_10051faa4;
}

