// rea decompile_all
// name: FUN_100656cb0
// address: 0x100656cb0
// body: available
// range: 0x100656cb0-0x1006570ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100656cb0(undefined8 param_1,code *param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined8 local_a0;
  long local_98;
  ulong local_90;
  long local_88;
  undefined8 local_80;
  code *local_78;
  long local_70;
  undefined8 local_68;
  
  puVar1 = PTR___ss27ExpressibleByIntegerLiteralTL_100995c08;
  lVar10 = *(long *)(param_3 - 8);
  uVar8 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_90 = (long)&local_a0 - uVar8;
  local_88 = local_90 - uVar8;
  uVar8 = local_88 - uVar8;
  local_98 = *(long *)(param_4 + 0x18);
  uVar9 = *(undefined8 *)(local_98 + 0x10);
  lVar3 = 0;
  local_80 = param_1;
  _swift_getAssociatedTypeWitness
            (0,uVar9,param_3,PTR___ss27ExpressibleByIntegerLiteralTL_100995c08,
             PTR___s18IntegerLiteralTypes013ExpressibleByaB0PTl_1009956e0);
  lVar12 = uVar8 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = uVar9;
  _swift_getAssociatedConformanceWitness
            (uVar9,param_3,lVar3,puVar1,
             PTR___ss27ExpressibleByIntegerLiteralP0cD4TypeAB_s01_ab7BuiltincD0Tn_100995c00);
  __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
            (lVar12,&DAT_10084d4f0,0x100,lVar3,uVar4);
  __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(uVar8,lVar12,param_3,uVar9);
  local_a0 = *(undefined8 *)(*(long *)(param_4 + 0x20) + 8);
  local_78 = param_2;
  local_70 = param_4;
  __sSL1loiySbx_xtFZTj(param_2,uVar8,param_3);
  pcVar11 = *(code **)(lVar10 + 8);
  (*pcVar11)(uVar8,param_3);
  uVar2 = local_90;
  if (((ulong)param_2 & 1) != 0) {
    __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
              (lVar12,&DAT_10084d4f0,0x100,lVar3,uVar4);
    lVar3 = local_88;
    __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(local_88,lVar12,param_3,uVar9);
    __ss18AdditiveArithmeticP1soiyxx_xtFZTj
              (uVar8,lVar3,local_78,param_3,*(undefined8 *)(local_98 + 8));
    (*pcVar11)(lVar3,param_3);
    FUN_1006563d0(local_80,uVar8,param_3,local_70);
    (*pcVar11)(uVar8,param_3);
    return;
  }
  local_88 = uVar4;
  (**(code **)(lVar10 + 0x10))(local_90,local_78,param_3);
  lVar10 = local_70;
  uVar5 = param_3;
  __sSz8isSignedSbvgZTj(param_3,local_70);
  if ((uVar5 & 1) != 0) {
    __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
              (lVar12,&DAT_10084d4f0,0x100,lVar3,local_88);
    __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(uVar8,lVar12,param_3,uVar9);
    uVar5 = uVar2;
    __sSL2geoiySbx_xtFZTj(uVar2,uVar8,param_3,local_a0);
    (*pcVar11)(uVar8,param_3);
    if ((uVar5 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1006570f0);
      (*pcVar11)();
    }
  }
  uVar5 = param_3;
  __sSz8bitWidthSivgTj(param_3,lVar10);
  if ((long)uVar5 < 0x40) goto LAB_1006570a0;
  local_68 = 0xffffffffffffffff;
  uVar5 = param_3;
  local_78 = pcVar11;
  __sSz8isSignedSbvgZTj(param_3,lVar10);
  uVar6 = param_3;
  __sSz8bitWidthSivgTj(param_3,lVar10);
  pcVar11 = local_78;
  uVar7 = uVar8;
  if ((uVar5 & 1) == 0) {
    if ((long)uVar6 < 0x41) goto LAB_100657090;
    FUN_100659f38();
    __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj
              (uVar8,&local_68,PTR___sSuN_100995a50,uVar6,param_3,lVar10);
    __sSL1loiySbx_xtFZTj(uVar8,uVar2,param_3,local_a0);
  }
  else {
    if ((long)uVar6 < 0x41) {
      __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
                (lVar12,&DAT_10084d4f0,0x100,lVar3,local_88);
      __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(uVar8,lVar12,param_3,uVar9);
      uVar5 = uVar2;
      __sSL1goiySbx_xtFZTj(uVar2,uVar8,param_3,local_a0);
      pcVar11 = local_78;
      (*local_78)(uVar8,param_3);
      if ((uVar5 & 1) == 0) goto LAB_1006570a0;
LAB_100657090:
      __sSz8_lowWordSuvgTj(param_3,lVar10);
      goto LAB_1006570a0;
    }
    FUN_100659f38();
    __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj
              (uVar8,&local_68,PTR___sSuN_100995a50,uVar6,param_3,lVar10);
    __sSL1loiySbx_xtFZTj(uVar8,uVar2,param_3,local_a0);
    pcVar11 = local_78;
  }
  (*pcVar11)(uVar8,param_3);
  if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100657028);
    (*pcVar11)();
  }
LAB_1006570a0:
  uVar8 = param_3;
  __sSz8_lowWordSuvgTj(param_3,lVar10);
  (*pcVar11)(uVar2,param_3);
  FUN_100658ed8(uVar8);
  return;
}

