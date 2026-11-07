// rea decompile_all
// name: FUN_1006493a0
// address: 0x1006493a0
// body: available
// range: 0x1006493a0-0x10064995b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006493a0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_90 [4];
  long local_70 [2];
  
  lVar9 = *(long *)(param_3 + 0x20);
  local_b0 = *(long *)(lVar9 + 8);
  uVar14 = *(undefined8 *)(*(long *)(local_b0 + 0x18) + 0x10);
  lVar8 = *(long *)(param_3 + 0x10);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar14,lVar8,PTR___ss27ExpressibleByIntegerLiteralTL_100995c08,
             PTR___s18IntegerLiteralTypes013ExpressibleByaB0PTl_1009956e0);
  local_100 = (long)&local_100 -
              (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_c8 = *(long *)(lVar8 + -8);
  uVar6 = *(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_d0 = local_100 - uVar6;
  local_d8 = local_d0 - uVar6;
  lVar7 = local_d8 - uVar6;
  local_a0 = *(long *)(*(long *)(*(long *)(param_3 + 0x28) + 8) + 8);
  local_a8 = *(undefined8 *)(param_3 + 0x18);
  lVar4 = 0;
  local_f8 = lVar3;
  local_c0 = lVar7;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(local_a0 + 8),local_a8,PTR___sSTTL_100995860,
             PTR___s7ElementSTTl_1009956f8);
  lVar13 = *(long *)(lVar4 + -8);
  uVar6 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_e0 = lVar7 - uVar6;
  local_b8 = local_e0 - uVar6;
  lVar3 = param_3;
  FUN_1006492b8();
  if (SBORROW8(lVar3,1)) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x100649928);
    (*pcVar10)();
  }
  local_e8 = (lVar3 + -1) - param_2;
  if (SBORROW8(lVar3 + -1,param_2)) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10064992c);
    (*pcVar10)();
  }
  lVar3 = lVar8;
  local_f0 = param_1;
  __ss17FixedWidthIntegerP03bitB0SivgZTj(lVar8,lVar9);
  lVar15 = *(long *)(param_3 + 0x30);
  lVar7 = lVar4;
  __ss17FixedWidthIntegerP03bitB0SivgZTj(lVar4,lVar15);
  if (lVar3 == lVar7) {
    local_70[0] = local_e8;
    pcVar10 = (code *)local_90;
    __sSly7ElementQz5IndexQzcirTj(pcVar10,local_70,local_a8,local_a0);
    lVar3 = local_b8;
    (**(code **)(lVar13 + 0x10))(local_b8);
    (*pcVar10)(local_90,0);
    __sSzyxqd__cSzRd__lufCTj(local_f0,lVar3,lVar4,*(undefined8 *)(lVar15 + 8),lVar8,local_b0);
  }
  else {
    lVar3 = lVar8;
    __ss17FixedWidthIntegerP03bitB0SivgZTj(lVar8,lVar9);
    lVar7 = lVar4;
    __ss17FixedWidthIntegerP03bitB0SivgZTj(lVar4,lVar15);
    if (lVar7 < lVar3) {
      lVar7 = lVar8;
      __ss17FixedWidthIntegerP03bitB0SivgZTj(lVar8,lVar9);
      lVar9 = lVar4;
      __ss17FixedWidthIntegerP03bitB0SivgZTj(lVar4,lVar15);
      lVar3 = local_f8;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100649930);
        (*pcVar10)();
      }
      local_e0 = lVar13;
      if ((lVar7 == -0x8000000000000000) && (lVar9 == -1)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100649950);
        (*pcVar10)();
      }
      lVar13 = 0;
      if (lVar9 != 0) {
        lVar13 = lVar7 / lVar9;
      }
      uVar12 = uVar14;
      _swift_getAssociatedConformanceWitness
                (uVar14,lVar8,local_f8,PTR___ss27ExpressibleByIntegerLiteralTL_100995c08,
                 PTR___ss27ExpressibleByIntegerLiteralP0cD4TypeAB_s01_ab7BuiltincD0Tn_100995c00);
      lVar7 = local_100;
      __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
                (local_100,&DAT_10084d4f0,0x100,lVar3,uVar12);
      __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(local_c0,lVar7,lVar8,uVar14);
      lVar3 = lVar13 * local_e8;
      if (SUB168(SEXT816(lVar13) * SEXT816(local_e8),8) != lVar3 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10064993c);
        (*pcVar10)();
      }
      if (SCARRY8(local_e8,1)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100649940);
        (*pcVar10)();
      }
      lVar7 = lVar13 * (local_e8 + 1);
      if (SUB168(SEXT816(lVar13) * SEXT816(local_e8 + 1),8) != lVar7 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100649948);
        (*pcVar10)();
      }
      __sSl8endIndex0B0QzvgTj(local_90,local_a8,local_a0);
      lVar9 = local_90[0];
      if (lVar7 <= local_90[0]) {
        lVar9 = lVar7;
      }
      if (lVar9 < lVar3) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10064994c);
        (*pcVar10)();
      }
      if (lVar3 - lVar9 != 0) {
        if (lVar9 <= lVar3) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10064995c);
          (*pcVar10)();
        }
        lVar7 = 0;
        do {
          pcVar10 = (code *)local_90;
          local_70[0] = lVar3;
          __sSly7ElementQz5IndexQzcirTj(pcVar10,local_70,local_a8,local_a0);
          lVar5 = local_b8;
          (**(code **)(local_e0 + 0x10))(local_b8);
          (*pcVar10)(local_90,0);
          lVar1 = local_b0;
          lVar11 = local_d0;
          __sSzyxqd__cSzRd__lufCTj(local_d0,lVar5,lVar4,*(undefined8 *)(lVar15 + 8),lVar8,local_b0);
          local_90[0] = lVar7;
          FUN_10064af28();
          lVar13 = local_d8;
          __sSz2lloiyxx_qd__tSzRd__lFZTj
                    (local_d8,lVar11,local_90,PTR___sSiN_100995968,lVar5,lVar8,lVar1);
          pcVar10 = *(code **)(local_c8 + 8);
          (*pcVar10)(lVar11,lVar8);
          __sSz2oeoiyyxz_xtFZTj(local_c0,lVar13,lVar8,lVar1);
          (*pcVar10)(lVar13,lVar8);
          lVar13 = lVar4;
          __ss17FixedWidthIntegerP03bitB0SivgZTj(lVar4,lVar15);
          bVar2 = SCARRY8(lVar7,lVar13);
          lVar7 = lVar7 + lVar13;
          if (bVar2) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100649924);
            (*pcVar10)();
          }
          lVar3 = lVar3 + 1;
        } while (lVar9 != lVar3);
      }
      (**(code **)(local_c8 + 0x20))(local_f0,local_c0,lVar8);
    }
    else {
      lVar7 = lVar4;
      __ss17FixedWidthIntegerP03bitB0SivgZTj(lVar4,lVar15);
      lVar11 = lVar8;
      __ss17FixedWidthIntegerP03bitB0SivgZTj(lVar8,lVar9);
      lVar3 = local_e0;
      uVar14 = local_f0;
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100649934);
        (*pcVar10)();
      }
      if (lVar7 == -0x8000000000000000 && lVar11 == -1) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100649954);
        (*pcVar10)();
      }
      lVar5 = 0;
      if (lVar11 != 0) {
        lVar5 = lVar7 / lVar11;
      }
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100649938);
        (*pcVar10)();
      }
      if ((local_e8 == -0x8000000000000000) && (lVar5 == -1)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100649958);
        (*pcVar10)();
      }
      local_70[0] = 0;
      if (lVar5 != 0) {
        local_70[0] = local_e8 / lVar5;
      }
      lVar11 = local_e8 - local_70[0] * lVar5;
      pcVar10 = (code *)local_90;
      __sSly7ElementQz5IndexQzcirTj(pcVar10,local_70,local_a8,local_a0);
      (**(code **)(lVar13 + 0x10))(lVar3);
      (*pcVar10)(local_90,0);
      lVar7 = lVar8;
      __ss17FixedWidthIntegerP03bitB0SivgZTj(lVar8,lVar9);
      local_90[0] = lVar11 * lVar7;
      if (SUB168(SEXT816(lVar11) * SEXT816(lVar7),8) != local_90[0] >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100649944);
        (*pcVar10)();
      }
      uVar12 = *(undefined8 *)(lVar15 + 8);
      FUN_10064af28();
      lVar9 = local_b8;
      __sSz2ggoiyxx_qd__tSzRd__lFZTj
                (local_b8,lVar3,local_90,PTR___sSiN_100995968,lVar7,lVar4,uVar12);
      (**(code **)(lVar13 + 8))(lVar3,lVar4);
      __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj(uVar14,lVar9,lVar4,uVar12,lVar8,local_b0);
    }
  }
  return;
}

