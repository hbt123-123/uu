// rea decompile_all
// name: FUN_100504f64
// address: 0x100504f64
// body: available
// range: 0x100504f64-0x100505213 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100504f64(undefined1 *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  long *unaff_x20;
  long unaff_x21;
  
  uVar1 = (uint)param_1 & 7;
  if (uVar1 < 3) {
    if (((ulong)param_1 & 7) == 0) {
      FUN_1004fdea4();
      return;
    }
    if (uVar1 == 1) {
      if (7 < unaff_x20[1]) {
        param_1 = (undefined1 *)(*unaff_x20 + 8);
        lVar6 = unaff_x20[1] + -8;
LAB_100505004:
        *unaff_x20 = (long)param_1;
        unaff_x20[1] = lVar6;
        return;
      }
    }
    else {
      if (uVar1 != 2) {
LAB_100505204:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100505208);
        (*pcVar2)();
      }
      FUN_1004fdea4();
      if (unaff_x21 != 0) {
        return;
      }
      puVar5 = (undefined1 *)unaff_x20[1];
      if ((long)puVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100505210);
        (*pcVar2)();
      }
      lVar6 = (long)puVar5 - (long)param_1;
      if (param_1 <= puVar5) {
        param_1 = param_1 + *unaff_x20;
        goto LAB_100505004;
      }
    }
  }
  else if (uVar1 == 3) {
    lVar6 = unaff_x20[0xf] + -1;
    if (SBORROW8(unaff_x20[0xf],1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10050520c);
      (*pcVar2)();
    }
    unaff_x20[0xf] = lVar6;
    if (lVar6 < 0) {
      FUN_100506290();
      _swift_allocError(&DAT_1009cdf18,param_1,0,0);
      uVar4 = 6;
      goto LAB_100505118;
    }
    uVar9 = unaff_x20[1];
    while (0 < (long)uVar9) {
      pcVar10 = (char *)*unaff_x20;
      uVar7 = (ulong)*pcVar10;
      uVar8 = uVar9 - 1;
      if ((long)uVar7 < 0) {
        if (1 < uVar9) {
          uVar7 = uVar7 & 0x7f;
          pcVar10 = pcVar10 + 2;
          uVar9 = 7;
          while (uVar7 = ((ulong)(byte)pcVar10[-1] & 0x7f) << (uVar9 & 0x3f) | uVar7,
                pcVar10[-1] < '\0') {
            if (uVar8 < 2) goto LAB_1005051dc;
            pcVar10 = pcVar10 + 1;
            uVar8 = uVar8 - 1;
            bVar3 = 0x38 < uVar9;
            uVar9 = uVar9 + 7;
            if (bVar3) goto LAB_1005051dc;
          }
          *unaff_x20 = (long)pcVar10;
          unaff_x20[1] = uVar8 - 1;
          if (uVar7 < 0xffffffff) goto LAB_1005050b0;
        }
LAB_1005051dc:
        FUN_100506290();
        _swift_allocError(&DAT_1009cdf18,param_1,0,0);
        uVar4 = 3;
        goto LAB_100505118;
      }
      *unaff_x20 = (long)(pcVar10 + 1);
      unaff_x20[1] = uVar8;
LAB_1005050b0:
      uVar1 = (uint)uVar7 & 7;
      if (uVar7 < 8 || 5 < uVar1) goto LAB_1005051dc;
      if (uVar1 == 4) {
        *(undefined1 *)((long)unaff_x20 + 0x21) = 4;
        uVar1 = (uint)uVar7 >> 3;
        unaff_x20[5] = (ulong)uVar1;
        if (uVar1 == (uint)param_1 >> 3) {
          lVar6 = unaff_x20[0xf] + 1;
          if (SCARRY8(unaff_x20[0xf],1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100505214);
            (*pcVar2)();
          }
          unaff_x20[0xf] = lVar6;
          if (lVar6 <= unaff_x20[0xd]) {
            return;
          }
          __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                    ("Fatal error",0xb,2,&DAT_d00000000000003b,0x80000001008bc970,
                     "SwiftProtobuf/BinaryDecoder.swift",0x21,2,0x5e,0);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1005051dc);
          (*pcVar2)();
        }
        goto LAB_1005051dc;
      }
      *(char *)((long)unaff_x20 + 0x21) = (char)uVar1;
      unaff_x20[5] = uVar7 >> 3;
      FUN_100504f64(uVar7);
      if (unaff_x21 != 0) {
        return;
      }
      uVar9 = unaff_x20[1];
    }
  }
  else if (uVar1 != 4) {
    if (uVar1 != 5) goto LAB_100505204;
    if (3 < unaff_x20[1]) {
      param_1 = (undefined1 *)(*unaff_x20 + 4);
      lVar6 = unaff_x20[1] + -4;
      goto LAB_100505004;
    }
  }
  FUN_100506290();
  _swift_allocError(&DAT_1009cdf18,param_1,0,0);
  uVar4 = 1;
LAB_100505118:
  *param_1 = uVar4;
  _swift_willThrow();
  return;
}

