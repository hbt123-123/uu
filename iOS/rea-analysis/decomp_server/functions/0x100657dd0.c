// rea decompile_all
// name: FUN_100657dd0
// address: 0x100657dd0
// body: available
// range: 0x100657dd0-0x100658233 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100657dd0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  code *param_5,ulong param_6,long param_7)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 uVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  long local_b0;
  undefined1 *local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  long local_78;
  undefined4 local_6c;
  undefined8 local_68;
  
  puVar1 = PTR___ss27ExpressibleByIntegerLiteralTL_100995c08;
  lVar11 = *(long *)(param_6 - 8);
  uVar8 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_a8 = auStack_c0 + -uVar8;
  local_a0 = (long)local_a8 - uVar8;
  uVar8 = local_a0 - uVar8;
  local_b0 = *(long *)(param_7 + 0x18);
  uVar13 = *(undefined8 *)(local_b0 + 0x10);
  lVar3 = 0;
  local_98 = param_4;
  local_90 = param_2;
  local_88 = param_1;
  local_6c = param_3;
  _swift_getAssociatedTypeWitness
            (0,uVar13,param_6,PTR___ss27ExpressibleByIntegerLiteralTL_100995c08,
             PTR___s18IntegerLiteralTypes013ExpressibleByaB0PTl_1009956e0);
  lVar9 = uVar8 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = uVar13;
  _swift_getAssociatedConformanceWitness
            (uVar13,param_6,lVar3,puVar1,
             PTR___ss27ExpressibleByIntegerLiteralP0cD4TypeAB_s01_ab7BuiltincD0Tn_100995c00);
  __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
            (lVar9,&DAT_10084d4f0,0x100,lVar3,uVar4);
  __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(uVar8,lVar9,param_6,uVar13);
  local_b8 = *(undefined8 *)(*(long *)(param_7 + 0x20) + 8);
  local_80 = param_5;
  local_78 = param_7;
  __sSL1loiySbx_xtFZTj(param_5,uVar8,param_6);
  pcVar12 = *(code **)(lVar11 + 8);
  (*pcVar12)(uVar8,param_6);
  puVar2 = local_a8;
  if (((ulong)param_5 & 1) != 0) {
    __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
              (lVar9,&DAT_10084d4f0,0x100,lVar3,uVar4);
    lVar3 = local_a0;
    __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(local_a0,lVar9,param_6,uVar13);
    __ss18AdditiveArithmeticP1soiyxx_xtFZTj
              (uVar8,lVar3,local_80,param_6,*(undefined8 *)(local_b0 + 8));
    (*pcVar12)(lVar3,param_6);
    FUN_1006570f0(local_88,local_90,local_6c,local_98,uVar8,param_6,local_78);
    (*pcVar12)(uVar8,param_6);
    return;
  }
  local_a0 = uVar4;
  (**(code **)(lVar11 + 0x10))(local_a8,local_80,param_6);
  lVar11 = local_78;
  uVar5 = param_6;
  __sSz8isSignedSbvgZTj(param_6,local_78);
  uVar10 = local_6c;
  if ((uVar5 & 1) != 0) {
    __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
              (lVar9,&DAT_10084d4f0,0x100,lVar3,local_a0);
    __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(uVar8,lVar9,param_6,uVar13);
    puVar6 = puVar2;
    __sSL1loiySbx_xtFZTj(puVar2,uVar8,param_6,local_b8);
    (*pcVar12)(uVar8,param_6);
    if (((ulong)puVar6 & 1) != 0) goto LAB_1006581b0;
  }
  uVar5 = param_6;
  __sSz8bitWidthSivgTj(param_6,lVar11);
  if (0x3f < (long)uVar5) {
    local_68 = 0xffffffffffffffff;
    uVar5 = param_6;
    local_80 = pcVar12;
    __sSz8isSignedSbvgZTj(param_6,lVar11);
    uVar7 = param_6;
    __sSz8bitWidthSivgTj();
    if ((uVar5 & 1) == 0) {
      if ((long)uVar7 < 0x41) {
        __sSz8_lowWordSuvgTj(param_6,lVar11);
        pcVar12 = local_80;
        uVar10 = local_6c;
        goto LAB_1006581e0;
      }
    }
    else if ((long)uVar7 < 0x41) {
      __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
                (lVar9,&DAT_10084d4f0,0x100,lVar3,local_a0);
      __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(uVar8,lVar9,param_6,uVar13);
      puVar6 = puVar2;
      __sSL1goiySbx_xtFZTj(puVar2,uVar8,param_6,local_b8);
      pcVar12 = local_80;
      (*local_80)(uVar8,param_6);
      uVar10 = local_6c;
      if (((ulong)puVar6 & 1) != 0) {
        __sSz8_lowWordSuvgTj(param_6,lVar11);
        uVar10 = local_6c;
      }
      goto LAB_1006581e0;
    }
    FUN_100659f38();
    __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj
              (uVar8,&local_68,PTR___sSuN_100995a50,uVar7,param_6,lVar11);
    uVar5 = uVar8;
    __sSL1loiySbx_xtFZTj(uVar8,puVar2,param_6,local_b8);
    pcVar12 = local_80;
    (*local_80)(uVar8,param_6);
    uVar10 = local_6c;
    if ((uVar5 & 1) != 0) {
LAB_1006581b0:
      (*pcVar12)(puVar2,param_6);
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1006581c0);
      (*pcVar12)();
    }
  }
LAB_1006581e0:
  uVar8 = param_6;
  __sSz8_lowWordSuvgTj(param_6,lVar11);
  (*pcVar12)(puVar2,param_6);
  FUN_100658624(uVar8,local_88,local_90,uVar10,local_98);
  return;
}

