// rea decompile_all
// name: FUN_1006563d0
// address: 0x1006563d0
// body: available
// range: 0x1006563d0-0x10065683f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006563d0(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  undefined8 local_a0;
  long local_98;
  ulong local_90;
  ulong local_88;
  long *local_80;
  ulong local_78;
  long local_70;
  undefined8 local_68;
  
  puVar1 = PTR___ss27ExpressibleByIntegerLiteralTL_100995c08;
  lVar9 = *(long *)(param_3 - 8);
  uVar8 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_90 = (long)&local_a0 - uVar8;
  local_88 = local_90 - uVar8;
  uVar8 = local_88 - uVar8;
  local_98 = *(long *)(param_4 + 0x18);
  uVar10 = *(undefined8 *)(local_98 + 0x10);
  lVar4 = 0;
  local_80 = param_1;
  _swift_getAssociatedTypeWitness
            (0,uVar10,param_3,PTR___ss27ExpressibleByIntegerLiteralTL_100995c08,
             PTR___s18IntegerLiteralTypes013ExpressibleByaB0PTl_1009956e0);
  lVar12 = uVar8 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = uVar10;
  _swift_getAssociatedConformanceWitness
            (uVar10,param_3,lVar4,puVar1,
             PTR___ss27ExpressibleByIntegerLiteralP0cD4TypeAB_s01_ab7BuiltincD0Tn_100995c00);
  __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
            (lVar12,&DAT_10084d4f0,0x100,lVar4,uVar5);
  __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(uVar8,lVar12,param_3,uVar10);
  local_a0 = *(undefined8 *)(*(long *)(param_4 + 0x20) + 8);
  local_78 = param_2;
  local_70 = param_4;
  __sSL1loiySbx_xtFZTj(param_2,uVar8,param_3);
  pcVar11 = *(code **)(lVar9 + 8);
  (*pcVar11)(uVar8,param_3);
  uVar2 = local_90;
  if ((param_2 & 1) != 0) {
    __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
              (lVar12,&DAT_10084d4f0,0x100,lVar4,uVar5);
    uVar2 = local_88;
    __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(local_88,lVar12,param_3,uVar10);
    __ss18AdditiveArithmeticP1soiyxx_xtFZTj
              (uVar8,uVar2,local_78,param_3,*(undefined8 *)(local_98 + 8));
    (*pcVar11)(uVar2,param_3);
    FUN_100656cb0(local_80,uVar8,param_3,local_70);
    (*pcVar11)(uVar8,param_3);
    return;
  }
  local_88 = uVar8;
  (**(code **)(lVar9 + 0x10))(local_90,local_78,param_3);
  lVar9 = local_70;
  uVar8 = param_3;
  __sSz8isSignedSbvgZTj(param_3,local_70);
  if ((uVar8 & 1) != 0) {
    __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
              (lVar12,&DAT_10084d4f0,0x100,lVar4,uVar5);
    uVar8 = local_88;
    __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(local_88,lVar12,param_3,uVar10);
    uVar6 = uVar2;
    __sSL2geoiySbx_xtFZTj(uVar2,uVar8,param_3,local_a0);
    (*pcVar11)(uVar8,param_3);
    if ((uVar6 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100656840);
      (*pcVar11)();
    }
  }
  uVar8 = param_3;
  __sSz8bitWidthSivgTj(param_3,lVar9);
  if ((long)uVar8 < 0x40) goto LAB_1006567a0;
  local_68 = 0xffffffffffffffff;
  uVar6 = param_3;
  __sSz8isSignedSbvgZTj(param_3,lVar9);
  uVar7 = param_3;
  __sSz8bitWidthSivgTj(param_3,lVar9);
  uVar8 = local_88;
  if ((uVar6 & 1) == 0) {
    if ((long)uVar7 < 0x41) goto LAB_100656790;
    FUN_100659f38();
    __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj
              (uVar8,&local_68,PTR___sSuN_100995a50,uVar7,param_3,lVar9);
  }
  else {
    if ((long)uVar7 < 0x41) {
      __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
                (lVar12,&DAT_10084d4f0,0x100,lVar4,uVar5);
      uVar8 = local_88;
      __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj
                (local_88,lVar12,param_3,uVar10);
      uVar6 = uVar2;
      __sSL1goiySbx_xtFZTj(uVar2,uVar8,param_3,local_a0);
      (*pcVar11)(uVar8,param_3);
      if ((uVar6 & 1) == 0) goto LAB_1006567a0;
LAB_100656790:
      __sSz8_lowWordSuvgTj(param_3,lVar9);
      goto LAB_1006567a0;
    }
    FUN_100659f38();
    uVar8 = local_88;
    __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj
              (local_88,&local_68,PTR___sSuN_100995a50,uVar7,param_3,lVar9);
  }
  uVar6 = uVar8;
  __sSL1loiySbx_xtFZTj(uVar8,uVar2,param_3,local_a0);
  (*pcVar11)(uVar8,param_3);
  if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x100656728);
    (*pcVar11)();
  }
LAB_1006567a0:
  uVar8 = param_3;
  __sSz8_lowWordSuvgTj(param_3,lVar9);
  (*pcVar11)(uVar2,param_3);
  plVar3 = local_80;
  FUN_1006599cc(uVar8);
  if ((char)plVar3[4] == '\x01') {
    if ((char)plVar3[2] == '\0') {
      if (*plVar3 != 0 || plVar3[1] != 0) {
        return;
      }
    }
    else {
      if ((char)plVar3[2] == '\x01') {
        return;
      }
      if (*(long *)(plVar3[3] + 0x10) != 0) {
        return;
      }
    }
    FUN_100646fb0(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0);
  }
  return;
}

