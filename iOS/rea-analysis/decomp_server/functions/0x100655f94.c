// rea decompile_all
// name: FUN_100655f94
// address: 0x100655f94
// body: available
// range: 0x100655f94-0x1006563cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100655f94(undefined8 *param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  undefined8 local_d0;
  long local_c8;
  code *local_c0;
  ulong local_b8;
  undefined8 *local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  
  puVar1 = PTR___ss27ExpressibleByIntegerLiteralTL_100995c08;
  lVar8 = *(long *)(param_4 - 8);
  uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_c0 = (code *)((long)&local_d0 - uVar7);
  local_b8 = (long)local_c0 - uVar7;
  uVar7 = local_b8 - uVar7;
  local_c8 = *(long *)(param_5 + 0x18);
  uVar9 = *(undefined8 *)(local_c8 + 0x10);
  lVar3 = 0;
  local_b0 = param_1;
  local_a0 = param_2;
  _swift_getAssociatedTypeWitness
            (0,uVar9,param_4,PTR___ss27ExpressibleByIntegerLiteralTL_100995c08,
             PTR___s18IntegerLiteralTypes013ExpressibleByaB0PTl_1009956e0);
  lVar11 = uVar7 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = uVar9;
  _swift_getAssociatedConformanceWitness
            (uVar9,param_4,lVar3,puVar1,
             PTR___ss27ExpressibleByIntegerLiteralP0cD4TypeAB_s01_ab7BuiltincD0Tn_100995c00);
  __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
            (lVar11,&DAT_10084d4f0,0x100,lVar3,uVar4);
  __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(uVar7,lVar11,param_4,uVar9);
  local_d0 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 8);
  uVar5 = param_3;
  local_a8 = param_5;
  __sSL2geoiySbx_xtFZTj(param_3,uVar7,param_4);
  pcVar10 = *(code **)(lVar8 + 8);
  (*pcVar10)(uVar7,param_4);
  uVar6 = local_b8;
  if ((uVar5 & 1) == 0) {
    __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
              (lVar11,&DAT_10084d4f0,0x100,lVar3,uVar4);
    pcVar2 = local_c0;
    __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(local_c0,lVar11,param_4,uVar9);
    __ss18AdditiveArithmeticP1soiyxx_xtFZTj
              (uVar7,pcVar2,param_3,param_4,*(undefined8 *)(local_c8 + 8));
    (*pcVar10)(pcVar2,param_4);
    FUN_100656840(&local_90,local_a0,uVar7,param_4,local_a8);
    uStack_98 = uStack_88;
    local_a0 = local_90;
    (*pcVar10)(uVar7,param_4);
    local_90 = local_a0;
    uStack_88 = uStack_98;
    goto LAB_100656398;
  }
  local_c8 = uVar9;
  local_c0 = pcVar10;
  (**(code **)(lVar8 + 0x10))(local_b8,param_3,param_4);
  lVar8 = local_a8;
  uVar5 = param_4;
  __sSz8isSignedSbvgZTj(param_4,local_a8);
  if ((uVar5 & 1) != 0) {
    __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
              (lVar11,&DAT_10084d4f0,0x100,lVar3,uVar4);
    __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(uVar7,lVar11,param_4,local_c8);
    uVar5 = uVar6;
    __sSL2geoiySbx_xtFZTj(uVar6,uVar7,param_4,local_d0);
    (*local_c0)(uVar7,param_4);
    if ((uVar5 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1006563d0);
      (*pcVar10)();
    }
  }
  uVar5 = param_4;
  __sSz8bitWidthSivgTj(param_4,lVar8);
  if (0x3f < (long)uVar5) {
    local_90 = 0xffffffffffffffff;
    uVar6 = param_4;
    __sSz8isSignedSbvgZTj(param_4,lVar8);
    uVar5 = param_4;
    __sSz8bitWidthSivgTj(param_4,lVar8);
    if ((uVar6 & 1) == 0) {
      if (0x40 < (long)uVar5) goto LAB_1006562e4;
LAB_100656340:
      __sSz8_lowWordSuvgTj(param_4,lVar8);
      uVar6 = local_b8;
    }
    else if ((long)uVar5 < 0x41) {
      __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
                (lVar11,&DAT_10084d4f0,0x100,lVar3,uVar4);
      __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(uVar7,lVar11,param_4,local_c8)
      ;
      uVar5 = local_b8;
      __sSL1goiySbx_xtFZTj(local_b8,uVar7,param_4,local_d0);
      (*local_c0)(uVar7,param_4);
      uVar6 = local_b8;
      if ((uVar5 & 1) != 0) goto LAB_100656340;
    }
    else {
LAB_1006562e4:
      FUN_100659f38();
      __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj
                (uVar7,&local_90,PTR___sSuN_100995a50,uVar5,param_4,lVar8);
      uVar6 = local_b8;
      uVar5 = uVar7;
      __sSL1loiySbx_xtFZTj(uVar7,local_b8,param_4,local_d0);
      (*local_c0)(uVar7,param_4);
      if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100656340);
        (*pcVar10)();
      }
    }
  }
  uVar5 = param_4;
  __sSz8_lowWordSuvgTj(param_4,lVar8);
  (*local_c0)(uVar6,param_4);
  FUN_100659e6c(&local_90,uVar5);
LAB_100656398:
  local_b0[1] = uStack_88;
  *local_b0 = local_90;
  *(undefined1 *)(local_b0 + 2) = local_80;
  local_b0[3] = local_78;
  *(undefined1 *)(local_b0 + 4) = local_70;
  return;
}

