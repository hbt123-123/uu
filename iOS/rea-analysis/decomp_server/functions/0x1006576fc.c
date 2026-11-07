// rea decompile_all
// name: FUN_1006576fc
// address: 0x1006576fc
// body: available
// range: 0x1006576fc-0x100657dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006576fc(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long lStack_a8;
  long local_a0;
  ulong local_98;
  code *local_90;
  undefined8 local_88;
  ulong local_80;
  long local_78;
  long *local_70;
  long local_68;
  
  puVar1 = PTR___ss27ExpressibleByIntegerLiteralTL_100995c08;
  lVar13 = *(long *)(param_3 - 8);
  uVar9 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_98 = (long)&local_c0 - uVar9;
  lVar10 = local_98 - uVar9;
  uVar9 = lVar10 - uVar9;
  local_90 = *(code **)(param_4 + 0x18);
  uVar11 = *(undefined8 *)((long)local_90 + 0x10);
  lVar2 = 0;
  local_80 = param_2;
  local_70 = param_1;
  _swift_getAssociatedTypeWitness
            (0,uVar11,param_3,PTR___ss27ExpressibleByIntegerLiteralTL_100995c08,
             PTR___s18IntegerLiteralTypes013ExpressibleByaB0PTl_1009956e0);
  lVar12 = uVar9 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = uVar11;
  _swift_getAssociatedConformanceWitness
            (uVar11,param_3,lVar2,puVar1,
             PTR___ss27ExpressibleByIntegerLiteralP0cD4TypeAB_s01_ab7BuiltincD0Tn_100995c00);
  __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
            (lVar12,&DAT_10084d4f0,0x100,lVar2,uVar3);
  __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(uVar9,lVar12,param_3,uVar11);
  uVar8 = local_80;
  local_88 = *(undefined8 *)(*(long *)(param_4 + 0x20) + 8);
  uVar4 = local_80;
  local_78 = param_4;
  __sSL1loiySbx_xtFZTj(local_80,uVar9,param_3);
  pcVar14 = *(code **)(lVar13 + 8);
  local_a0 = lVar13;
  (*pcVar14)(uVar9,param_3);
  if ((uVar4 & 1) != 0) {
    __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
              (lVar12,&DAT_10084d4f0,0x100,lVar2,uVar3);
    __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(lVar10,lVar12,param_3,uVar11);
    __ss18AdditiveArithmeticP1soiyxx_xtFZTj
              (uVar9,lVar10,uVar8,param_3,*(undefined8 *)((long)local_90 + 8));
    (*pcVar14)(lVar10,param_3);
    FUN_100658234(local_70,uVar9,param_3,local_78);
    (*pcVar14)(uVar9,param_3);
    return;
  }
  lVar10 = *local_70;
  local_b0 = uVar3;
  lStack_a8 = lVar2;
  local_90 = pcVar14;
  FUN_10065f798(lVar10,local_70[1],(char)local_70[2],local_70[3]);
  lVar2 = local_78;
  uVar4 = param_3;
  __sSz8isSignedSbvgZTj(param_3,local_78);
  uVar7 = uVar8;
  uVar6 = param_3;
  local_b8 = uVar11;
  if ((uVar4 & 1) == 0) {
    uVar4 = param_3;
    __sSz8isSignedSbvgZTj(param_3,lVar2);
    uVar5 = param_3;
    __sSz8bitWidthSivgTj(param_3,lVar2);
    if ((uVar4 & 1) == 0) {
      if ((long)uVar5 < 0x40) {
        __sSz8_lowWordSuvgTj(param_3,lVar2);
        lVar13 = uVar6 - lVar10;
        goto LAB_100657a5c;
      }
      if (lVar10 < 1) goto LAB_100657a64;
      local_68 = lVar10;
      FUN_10064af28();
      __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj
                (uVar9,&local_68,PTR___sSiN_100995968,uVar5,param_3,lVar2);
      __sSL1loiySbx_xtFZTj(uVar8,uVar9,param_3,local_88);
      (*local_90)(uVar9,param_3);
    }
    else {
      if ((long)uVar5 < 0x41) {
        __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
                  (lVar12,&DAT_10084d4f0,0x100,lStack_a8,local_b0);
        local_c0 = lVar12;
        __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj
                  (uVar9,lVar12,param_3,local_b8);
        uVar4 = uVar8;
        __sSL1loiySbx_xtFZTj(uVar8,uVar9,param_3,local_88);
        (*local_90)(uVar9,param_3);
        lVar12 = local_c0;
        if (((uVar4 & 1) == 0) &&
           (uVar4 = param_3, __sSz8_lowWordSuvgTj(param_3,lVar2), lVar10 <= (long)uVar4))
        goto LAB_100657a64;
        goto LAB_100657b6c;
      }
      local_68 = lVar10;
      FUN_10064af28();
      __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj
                (uVar9,&local_68,PTR___sSiN_100995968,uVar5,param_3,lVar2);
      __sSL1loiySbx_xtFZTj(uVar8,uVar9,param_3,local_88);
      (*local_90)(uVar9,param_3);
    }
joined_r0x0001006579d0:
    if ((uVar7 & 1) == 0) {
LAB_100657a64:
      FUN_100646f0c();
      return;
    }
  }
  else {
    uVar4 = param_3;
    __sSz8bitWidthSivgTj(param_3,lVar2);
    if (0x3f < (long)uVar4) {
      local_68 = lVar10;
      FUN_10064af28();
      __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj
                (uVar9,&local_68,PTR___sSiN_100995968,uVar4,param_3,lVar2);
      __sSL1loiySbx_xtFZTj(uVar8,uVar9,param_3,local_88);
      (*local_90)(uVar9,param_3);
      goto joined_r0x0001006579d0;
    }
    __sSz8_lowWordSuvgTj(param_3,lVar2);
    lVar13 = uVar6 - lVar10;
LAB_100657a5c:
    if (lVar13 < 0 == SBORROW8(uVar6,lVar10)) goto LAB_100657a64;
  }
LAB_100657b6c:
  uVar4 = local_98;
  local_c0 = lVar12;
  (**(code **)(local_a0 + 0x10))(local_98,uVar8,param_3);
  uVar8 = param_3;
  __sSz8isSignedSbvgZTj(param_3,lVar2);
  pcVar14 = local_90;
  lVar10 = lStack_a8;
  uVar3 = local_b0;
  lVar12 = local_c0;
  if ((uVar8 & 1) != 0) {
    __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
              (local_c0,&DAT_10084d4f0,0x100,lStack_a8,local_b0);
    __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(uVar9,lVar12,param_3,local_b8);
    uVar8 = uVar4;
    __sSL2geoiySbx_xtFZTj(uVar4,uVar9,param_3,local_88);
    (*pcVar14)(uVar9,param_3);
    if ((uVar8 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x100657dd0);
      (*pcVar14)();
    }
  }
  uVar8 = param_3;
  __sSz8bitWidthSivgTj(param_3,lVar2);
  if ((long)uVar8 < 0x40) goto LAB_100657d80;
  local_68 = -1;
  uVar8 = param_3;
  __sSz8isSignedSbvgZTj(param_3,lVar2);
  uVar7 = param_3;
  __sSz8bitWidthSivgTj(param_3,lVar2);
  pcVar14 = local_90;
  lVar12 = local_c0;
  uVar6 = uVar9;
  if ((uVar8 & 1) == 0) {
    if ((long)uVar7 < 0x41) goto LAB_100657d70;
    FUN_100659f38();
    __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj
              (uVar9,&local_68,PTR___sSuN_100995a50,uVar7,param_3,lVar2);
    __sSL1loiySbx_xtFZTj(uVar9,uVar4,param_3,local_88);
  }
  else {
    if ((long)uVar7 < 0x41) {
      __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
                (local_c0,&DAT_10084d4f0,0x100,lVar10,uVar3);
      __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(uVar9,lVar12,param_3,local_b8)
      ;
      uVar8 = uVar4;
      __sSL1goiySbx_xtFZTj(uVar4,uVar9,param_3,local_88);
      pcVar14 = local_90;
      (*local_90)(uVar9,param_3);
      if ((uVar8 & 1) == 0) goto LAB_100657d80;
LAB_100657d70:
      __sSz8_lowWordSuvgTj(param_3,lVar2);
      goto LAB_100657d80;
    }
    FUN_100659f38();
    __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj
              (uVar9,&local_68,PTR___sSuN_100995a50,uVar7,param_3,lVar2);
    __sSL1loiySbx_xtFZTj(uVar9,uVar4,param_3,local_88);
    pcVar14 = local_90;
  }
  (*pcVar14)(uVar9,param_3);
  if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x100657d08);
    (*pcVar14)();
  }
LAB_100657d80:
  uVar8 = param_3;
  __sSz8_lowWordSuvgTj(param_3,lVar2);
  (*pcVar14)(uVar4,param_3);
  FUN_1006599cc(uVar8);
  return;
}

