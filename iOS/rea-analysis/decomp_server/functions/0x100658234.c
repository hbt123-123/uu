// rea decompile_all
// name: FUN_100658234
// address: 0x100658234
// body: available
// range: 0x100658234-0x100658623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100658234(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined8 local_a0;
  long local_98;
  ulong local_90;
  long local_88;
  undefined8 local_80;
  ulong local_78;
  long local_70;
  undefined8 local_68;
  
  puVar1 = PTR___ss27ExpressibleByIntegerLiteralTL_100995c08;
  lVar9 = *(long *)(param_3 - 8);
  uVar7 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_90 = (long)&local_a0 - uVar7;
  local_88 = local_90 - uVar7;
  uVar7 = local_88 - uVar7;
  local_98 = *(long *)(param_4 + 0x18);
  uVar8 = *(undefined8 *)(local_98 + 0x10);
  lVar3 = 0;
  local_80 = param_1;
  _swift_getAssociatedTypeWitness
            (0,uVar8,param_3,PTR___ss27ExpressibleByIntegerLiteralTL_100995c08,
             PTR___s18IntegerLiteralTypes013ExpressibleByaB0PTl_1009956e0);
  lVar11 = uVar7 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = uVar8;
  _swift_getAssociatedConformanceWitness
            (uVar8,param_3,lVar3,puVar1,
             PTR___ss27ExpressibleByIntegerLiteralP0cD4TypeAB_s01_ab7BuiltincD0Tn_100995c00);
  __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
            (lVar11,&DAT_10084d4f0,0x100,lVar3,uVar4);
  __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(uVar7,lVar11,param_3,uVar8);
  local_a0 = *(undefined8 *)(*(long *)(param_4 + 0x20) + 8);
  local_78 = param_2;
  local_70 = param_4;
  __sSL1loiySbx_xtFZTj(param_2,uVar7,param_3);
  pcVar10 = *(code **)(lVar9 + 8);
  (*pcVar10)(uVar7,param_3);
  uVar2 = local_90;
  if ((param_2 & 1) != 0) {
    __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
              (lVar11,&DAT_10084d4f0,0x100,lVar3,uVar4);
    lVar3 = local_88;
    __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(local_88,lVar11,param_3,uVar8);
    __ss18AdditiveArithmeticP1soiyxx_xtFZTj
              (uVar7,lVar3,local_78,param_3,*(undefined8 *)(local_98 + 8));
    (*pcVar10)(lVar3,param_3);
    FUN_1006576fc(local_80,uVar7,param_3,local_70);
    (*pcVar10)(uVar7,param_3);
    return;
  }
  local_88 = uVar4;
  (**(code **)(lVar9 + 0x10))(local_90,local_78,param_3);
  lVar9 = local_70;
  uVar5 = param_3;
  __sSz8isSignedSbvgZTj(param_3,local_70);
  if ((uVar5 & 1) != 0) {
    __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
              (lVar11,&DAT_10084d4f0,0x100,lVar3,local_88);
    __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(uVar7,lVar11,param_3,uVar8);
    uVar5 = uVar2;
    __sSL1loiySbx_xtFZTj(uVar2,uVar7,param_3,local_a0);
    (*pcVar10)(uVar7,param_3);
    if ((uVar5 & 1) != 0) goto LAB_1006585b4;
  }
  uVar5 = param_3;
  __sSz8bitWidthSivgTj(param_3,lVar9);
  if ((long)uVar5 < 0x40) goto LAB_1006585d8;
  local_68 = 0xffffffffffffffff;
  uVar5 = param_3;
  __sSz8isSignedSbvgZTj(param_3,lVar9);
  uVar6 = param_3;
  __sSz8bitWidthSivgTj(param_3,lVar9);
  if ((uVar5 & 1) == 0) {
    if (0x40 < (long)uVar6) goto LAB_100658560;
  }
  else {
    if (0x40 < (long)uVar6) {
LAB_100658560:
      FUN_100659f38();
      __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj
                (uVar7,&local_68,PTR___sSuN_100995a50,uVar6,param_3,lVar9);
      uVar5 = uVar7;
      __sSL1loiySbx_xtFZTj(uVar7,uVar2,param_3,local_a0);
      (*pcVar10)(uVar7,param_3);
      if ((uVar5 & 1) != 0) {
LAB_1006585b4:
        (*pcVar10)(uVar2,param_3);
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1006585c4);
        (*pcVar10)();
      }
      goto LAB_1006585d8;
    }
    __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
              (lVar11,&DAT_10084d4f0,0x100,lVar3,local_88);
    __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(uVar7,lVar11,param_3,uVar8);
    uVar5 = uVar2;
    __sSL1goiySbx_xtFZTj(uVar2,uVar7,param_3,local_a0);
    (*pcVar10)(uVar7,param_3);
    if ((uVar5 & 1) == 0) goto LAB_1006585d8;
  }
  __sSz8_lowWordSuvgTj(param_3,lVar9);
LAB_1006585d8:
  uVar7 = param_3;
  __sSz8_lowWordSuvgTj(param_3,lVar9);
  (*pcVar10)(uVar2,param_3);
  FUN_100658ed8(uVar7);
  return;
}

