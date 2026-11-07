// rea decompile_all
// name: FUN_1006570f0
// address: 0x1006570f0
// body: available
// range: 0x1006570f0-0x1006576fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006570f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,long param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  code *local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_74;
  ulong local_70;
  undefined8 local_68;
  
  puVar1 = PTR___ss27ExpressibleByIntegerLiteralTL_100995c08;
  lVar13 = *(long *)(param_6 - 8);
  uVar10 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_a0 = (long)&local_d0 - uVar10;
  local_a8 = (code *)(local_a0 - uVar10);
  uVar10 = (long)local_a8 - uVar10;
  local_b0 = *(long *)(param_7 + 0x18);
  uVar11 = *(undefined8 *)(local_b0 + 0x10);
  lVar4 = 0;
  local_90 = param_2;
  local_88 = param_1;
  local_80 = param_4;
  local_74 = param_3;
  _swift_getAssociatedTypeWitness
            (0,uVar11,param_6,PTR___ss27ExpressibleByIntegerLiteralTL_100995c08,
             PTR___s18IntegerLiteralTypes013ExpressibleByaB0PTl_1009956e0);
  lVar12 = uVar10 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = uVar11;
  _swift_getAssociatedConformanceWitness
            (uVar11,param_6,lVar4,puVar1,
             PTR___ss27ExpressibleByIntegerLiteralP0cD4TypeAB_s01_ab7BuiltincD0Tn_100995c00);
  __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
            (lVar12,&DAT_10084d4f0,0x100,lVar4,uVar5);
  __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(uVar10,lVar12,param_6,uVar11);
  local_98 = *(undefined8 *)(*(long *)(param_7 + 0x20) + 8);
  local_70 = param_5;
  __sSL1loiySbx_xtFZTj(param_5,uVar10,param_6);
  pcVar14 = *(code **)(lVar13 + 8);
  local_b8 = lVar13;
  (*pcVar14)(uVar10,param_6);
  if ((param_5 & 1) != 0) {
    __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
              (lVar12,&DAT_10084d4f0,0x100,lVar4,uVar5);
    pcVar2 = local_a8;
    __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(local_a8,lVar12,param_6,uVar11);
    __ss18AdditiveArithmeticP1soiyxx_xtFZTj
              (uVar10,pcVar2,local_70,param_6,*(undefined8 *)(local_b0 + 8));
    (*pcVar14)(pcVar2,param_6);
    FUN_100657dd0(local_88,local_90,local_74,local_80,uVar10,param_6,param_7);
    (*pcVar14)(uVar10,param_6);
    return;
  }
  uVar6 = param_6;
  local_c8 = uVar5;
  local_c0 = lVar4;
  local_a8 = pcVar14;
  __sSz8isSignedSbvgZTj(param_6,param_7);
  uVar9 = local_70;
  uVar7 = param_6;
  local_b0 = param_7;
  __sSz8bitWidthSivgTj(param_6,param_7);
  pcVar14 = local_a8;
  lVar4 = local_b0;
  uVar8 = uVar10;
  local_d0 = uVar11;
  if ((uVar6 & 1) == 0) {
    if (0x40 < (long)uVar7) {
      local_68 = 0xffffffffffffffff;
      FUN_100659f38();
      __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj
                (uVar10,&local_68,PTR___sSuN_100995a50,uVar7,param_6,lVar4);
      __sSL1loiySbx_xtFZTj(uVar10,uVar9,param_6,local_98);
      (*pcVar14)(uVar10,param_6);
      goto joined_r0x000100657410;
    }
LAB_10065749c:
    lVar4 = local_b0;
    __sSz8_lowWordSuvgTj(param_6,local_b0);
  }
  else if ((long)uVar7 < 0x41) {
    __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
              (lVar12,&DAT_10084d4f0,0x100,local_c0,local_c8);
    __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(uVar10,lVar12,param_6,uVar11);
    uVar6 = uVar9;
    __sSL1goiySbx_xtFZTj(uVar9,uVar10,param_6,local_98);
    pcVar14 = local_a8;
    (*local_a8)(uVar10,param_6);
    lVar4 = local_b0;
    if ((uVar6 & 1) != 0) goto LAB_10065749c;
  }
  else {
    local_68 = 0xffffffffffffffff;
    FUN_100659f38();
    lVar4 = local_b0;
    __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj
              (uVar10,&local_68,PTR___sSuN_100995a50,uVar7,param_6,local_b0);
    __sSL1loiySbx_xtFZTj(uVar10,uVar9,param_6,local_98);
    pcVar14 = local_a8;
    (*local_a8)(uVar10,param_6);
joined_r0x000100657410:
    if ((uVar8 & 1) != 0) {
      return;
    }
  }
  uVar6 = local_a0;
  (**(code **)(local_b8 + 0x10))(local_a0,uVar9,param_6);
  uVar9 = param_6;
  __sSz8isSignedSbvgZTj(param_6,lVar4);
  lVar13 = local_c0;
  if ((uVar9 & 1) != 0) {
    __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
              (lVar12,&DAT_10084d4f0,0x100,local_c0,local_c8);
    __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(uVar10,lVar12,param_6,local_d0);
    uVar9 = uVar6;
    __sSL2geoiySbx_xtFZTj(uVar6,uVar10,param_6,local_98);
    (*pcVar14)(uVar10,param_6);
    if ((uVar9 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1006576fc);
      (*pcVar14)();
    }
  }
  uVar9 = param_6;
  __sSz8bitWidthSivgTj(param_6,lVar4);
  uVar3 = local_74;
  uVar5 = local_80;
  if ((long)uVar9 < 0x40) goto LAB_1006576a0;
  local_68 = 0xffffffffffffffff;
  uVar9 = param_6;
  __sSz8isSignedSbvgZTj(param_6,lVar4);
  uVar6 = param_6;
  __sSz8bitWidthSivgTj(param_6,lVar4);
  lVar4 = local_b0;
  if ((uVar9 & 1) == 0) {
    if ((long)uVar6 < 0x41) goto LAB_10065768c;
    FUN_100659f38();
  }
  else {
    if ((long)uVar6 < 0x41) {
      __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
                (lVar12,&DAT_10084d4f0,0x100,lVar13,local_c8);
      __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj
                (uVar10,lVar12,param_6,local_d0);
      uVar9 = local_a0;
      __sSL1goiySbx_xtFZTj(local_a0,uVar10,param_6,local_98);
      (*local_a8)(uVar10,param_6);
      uVar6 = local_a0;
      lVar4 = local_b0;
      if ((uVar9 & 1) == 0) goto LAB_1006576a0;
LAB_10065768c:
      lVar4 = local_b0;
      __sSz8_lowWordSuvgTj(param_6,local_b0);
      uVar6 = local_a0;
      goto LAB_1006576a0;
    }
    FUN_100659f38();
    lVar4 = local_b0;
  }
  __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj
            (uVar10,&local_68,PTR___sSuN_100995a50,uVar6,param_6,lVar4);
  uVar6 = local_a0;
  uVar9 = uVar10;
  __sSL1loiySbx_xtFZTj(uVar10,local_a0,param_6,local_98);
  (*local_a8)(uVar10,param_6);
  if ((uVar9 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x100657628);
    (*pcVar14)();
  }
LAB_1006576a0:
  uVar10 = param_6;
  __sSz8_lowWordSuvgTj(param_6,lVar4);
  (*local_a8)(uVar6,param_6);
  FUN_10065933c(uVar10,local_88,local_90,uVar3,uVar5);
  return;
}

