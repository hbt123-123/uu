// rea decompile_all
// name: FUN_10011b350
// address: 0x10011b350
// body: available
// range: 0x10011b350-0x10011b4f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10011b350(undefined8 *param_1,long param_2,long param_3,undefined8 ***param_4,
                  undefined8 ***param_5)

{
  long lVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  bool bVar7;
  undefined8 ***pppuVar8;
  long lVar9;
  long lVar10;
  undefined2 uVar11;
  undefined8 ***pppuVar12;
  undefined8 **local_70;
  ulong uStack_68;
  
  pppuVar8 = (undefined8 ***)((ulong)param_5 >> 0x38 & 0xf);
  pppuVar2 = (undefined8 ***)((ulong)param_4 & 0xffffffffffff);
  if (((ulong)param_5 & 0x2000000000000000) != 0) {
    pppuVar2 = pppuVar8;
  }
  if (param_2 == 0) {
    param_3 = 0;
  }
  else if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10011b4f4);
      (*pcVar3)();
    }
    lVar9 = 0;
    lVar10 = 0;
    bVar7 = true;
    pppuVar12 = (undefined8 ***)0x0;
    do {
      uVar11 = SUB82(pppuVar12,0);
      if (bVar7) {
        if ((long)pppuVar2 <= lVar10) {
          bVar7 = true;
          param_3 = lVar9;
          goto LAB_10011b4ac;
        }
        if (((ulong)param_5 >> 0x3c & 1) == 0) {
          if (((ulong)param_5 >> 0x3d & 1) == 0) {
            pppuVar4 = (undefined8 ***)(((ulong)param_5 & 0xfffffffffffffff) + 0x20);
            pppuVar6 = (undefined8 ***)((ulong)param_4 & 0xffffffffffff);
            if (((ulong)param_4 >> 0x3c & 1) == 0) {
              pppuVar4 = param_4;
              pppuVar6 = param_5;
              __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
            }
          }
          else {
            pppuVar4 = &local_70;
            pppuVar6 = pppuVar8;
            local_70 = param_4;
            uStack_68 = (ulong)param_5 & 0xffffffffffffff;
          }
          __ss13_decodeScalar_10startingAts7UnicodeO0B0V_Si12scalarLengthtSRys5UInt8VG_SitF();
        }
        else {
          pppuVar4 = (undefined8 ***)(lVar10 << 0x10);
          pppuVar6 = param_4;
          __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                    (pppuVar4,param_4,param_5);
        }
        lVar10 = (long)pppuVar6 + lVar10;
        if (((ulong)pppuVar4 & 0xffff0000) == 0) {
          bVar7 = true;
          pppuVar6 = pppuVar4;
          pppuVar5 = pppuVar12;
        }
        else {
          pppuVar5 = (undefined8 ***)0x1;
          __ss7UnicodeO6ScalarV9UTF16ViewVys6UInt16VSicig(1,pppuVar4);
          pppuVar6 = (undefined8 ***)0x0;
          __ss7UnicodeO6ScalarV9UTF16ViewVys6UInt16VSicig(0,(ulong)pppuVar4 & 0xffffffff);
          bVar7 = false;
        }
      }
      else {
        bVar7 = true;
        pppuVar5 = (undefined8 ***)0x0;
        pppuVar6 = pppuVar12;
      }
      uVar11 = SUB82(pppuVar5,0);
      *(short *)(param_2 + lVar9 * 2) = (short)pppuVar6;
      if (param_3 + -1 == lVar9) goto LAB_10011b4ac;
      lVar1 = lVar9 + 1;
      lVar9 = lVar9 + 1;
      pppuVar12 = pppuVar5;
      if (SCARRY8(lVar1,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10011b4e4);
        (*pcVar3)();
      }
    } while( true );
  }
  uVar11 = 0;
  lVar10 = 0;
  bVar7 = true;
LAB_10011b4ac:
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = lVar10;
  param_1[3] = pppuVar2;
  *(undefined2 *)(param_1 + 4) = uVar11;
  *(bool *)((long)param_1 + 0x22) = bVar7;
  return param_3;
}

