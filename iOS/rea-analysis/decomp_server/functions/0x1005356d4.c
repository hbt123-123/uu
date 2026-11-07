// rea decompile_all
// name: FUN_1005356d4
// address: 0x1005356d4
// body: available
// range: 0x1005356d4-0x100535953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1005356d4(undefined8 *param_1,ulong param_2,long *param_3,long param_4)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  ulong extraout_x8;
  ulong uVar4;
  ulong uVar5;
  ulong extraout_x8_00;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x21;
  undefined8 uVar9;
  
  lVar6 = *param_3;
  if (lVar6 == param_4) {
    FUN_1004f98e4();
    _swift_allocError(&DAT_1009d03a0,param_1,0,0);
    uVar9 = 0xd;
    goto LAB_100535714;
  }
  bVar2 = *(byte *)((long)param_1 + lVar6);
  if (bVar2 == 0x30) {
    lVar1 = 0;
    if (param_1 != (undefined8 *)0x0) {
      lVar1 = param_2 - (long)param_1;
    }
    if ((lVar6 < 0) || (lVar1 <= lVar6)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100535954);
      (*pcVar3)();
    }
    lVar1 = lVar6 + 1;
    *param_3 = lVar1;
    if (lVar1 == param_4) {
      return 0;
    }
    bVar2 = *(byte *)((long)param_1 + lVar1);
    if (0xfffffff5 < bVar2 - 0x3a) {
      FUN_1004f98e4();
      _swift_allocError(&DAT_1009d03a0,param_1,0,0);
      uVar9 = 0xc;
      goto LAB_100535714;
    }
    if (bVar2 < 0x5c) {
      if ((bVar2 != 0x2e) && (bVar2 != 0x45)) {
        return 0;
      }
    }
    else {
      if (bVar2 == 0x5c) {
        return 0;
      }
      if (bVar2 != 0x65) {
        return 0;
      }
    }
LAB_1005358d0:
    *param_3 = lVar6;
    FUN_100535954();
    if (unaff_x21 != 0) {
      return extraout_x8_00;
    }
    if (((((param_2 & 1) == 0) && (-1.0 < (double)param_1)) &&
        ((double)param_1 < 1.8446744073709552e+19)) &&
       ((double)(long)(double)param_1 == (double)param_1)) {
      return (long)(double)param_1;
    }
  }
  else {
    if (0xfffffff6 < bVar2 - 0x3a) {
      uVar4 = 0;
      lVar7 = lVar6;
      lVar1 = 0;
      if (param_1 != (undefined8 *)0x0) {
        lVar1 = param_2 - (long)param_1;
      }
      while( true ) {
        if (param_4 == lVar7) {
          return uVar4;
        }
        bVar2 = *(byte *)((long)param_1 + lVar7);
        if ((byte)(bVar2 - 0x3a) < 0xf6) break;
        if (0x1999999999999999 < uVar4) {
LAB_100535864:
          FUN_1004f98e4();
          _swift_allocError(&DAT_1009d03a0,param_1,0,0);
          uVar9 = 2;
          goto LAB_100535714;
        }
        uVar8 = (ulong)(byte)(bVar2 - 0x30);
        uVar5 = uVar4 * 10;
        if (CARRY8(uVar8,uVar5)) goto LAB_100535864;
        if ((lVar6 < 0) || (lVar1 <= lVar7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100535950);
          (*pcVar3)();
        }
        *param_3 = lVar7 + 1;
        uVar4 = uVar5 + uVar8;
        lVar7 = lVar7 + 1;
        if (CARRY8(uVar5,uVar8)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10053580c);
          (*pcVar3)();
        }
      }
      if (bVar2 < 0x5c) {
        if ((bVar2 != 0x2e) && (bVar2 != 0x45)) {
          return uVar4;
        }
      }
      else {
        if (bVar2 == 0x5c) {
          return 0;
        }
        if (bVar2 != 0x65) {
          return uVar4;
        }
      }
      goto LAB_1005358d0;
    }
    if (bVar2 == 0x5c) {
      return 0;
    }
  }
  FUN_1004f98e4();
  _swift_allocError(&DAT_1009d03a0,param_1,0,0);
  uVar9 = 1;
LAB_100535714:
  param_1[1] = uVar9;
  *param_1 = 0;
  _swift_willThrow();
  return extraout_x8;
}

