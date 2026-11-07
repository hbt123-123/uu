// rea decompile_all
// name: FUN_100656840
// address: 0x100656840
// body: available
// range: 0x100656840-0x100656caf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100656840(ulong *param_1,ulong *param_2,ulong param_3,ulong param_4,long param_5)

{
  undefined1 uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 local_c0;
  long local_b8;
  code *local_b0;
  ulong local_a8;
  ulong *local_a0;
  ulong *local_98;
  long local_90;
  ulong local_88;
  ulong uStack_80;
  undefined1 local_78;
  ulong local_70;
  undefined1 local_68;
  
  puVar2 = PTR___ss27ExpressibleByIntegerLiteralTL_100995c08;
  lVar12 = *(long *)(param_4 - 8);
  uVar10 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_b0 = (code *)((long)&local_c0 - uVar10);
  local_a8 = (long)local_b0 - uVar10;
  uVar10 = local_a8 - uVar10;
  local_b8 = *(long *)(param_5 + 0x18);
  uVar13 = *(undefined8 *)(local_b8 + 0x10);
  lVar5 = 0;
  local_a0 = param_1;
  local_98 = param_2;
  _swift_getAssociatedTypeWitness
            (0,uVar13,param_4,PTR___ss27ExpressibleByIntegerLiteralTL_100995c08,
             PTR___s18IntegerLiteralTypes013ExpressibleByaB0PTl_1009956e0);
  lVar14 = uVar10 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = uVar13;
  _swift_getAssociatedConformanceWitness
            (uVar13,param_4,lVar5,puVar2,
             PTR___ss27ExpressibleByIntegerLiteralP0cD4TypeAB_s01_ab7BuiltincD0Tn_100995c00);
  __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
            (lVar14,&DAT_10084d4f0,0x100,lVar5,uVar6);
  __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(uVar10,lVar14,param_4,uVar13);
  local_c0 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 8);
  uVar7 = param_3;
  local_90 = param_5;
  __sSL2geoiySbx_xtFZTj(param_3,uVar10,param_4);
  pcVar11 = *(code **)(lVar12 + 8);
  (*pcVar11)(uVar10,param_4);
  uVar8 = local_a8;
  if ((uVar7 & 1) == 0) {
    __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
              (lVar14,&DAT_10084d4f0,0x100,lVar5,uVar6);
    pcVar3 = local_b0;
    __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(local_b0,lVar14,param_4,uVar13);
    __ss18AdditiveArithmeticP1soiyxx_xtFZTj
              (uVar10,pcVar3,param_3,param_4,*(undefined8 *)(local_b8 + 8));
    (*pcVar11)(pcVar3,param_4);
    FUN_100655f94(&local_88,local_98,uVar10,param_4,local_90);
    (*pcVar11)(uVar10,param_4);
    goto LAB_100656c7c;
  }
  local_b8 = uVar6;
  local_b0 = pcVar11;
  (**(code **)(lVar12 + 0x10))(local_a8,param_3,param_4);
  lVar12 = local_90;
  uVar7 = param_4;
  __sSz8isSignedSbvgZTj(param_4,local_90);
  if ((uVar7 & 1) != 0) {
    __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
              (lVar14,&DAT_10084d4f0,0x100,lVar5,local_b8);
    __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(uVar10,lVar14,param_4,uVar13);
    uVar7 = uVar8;
    __sSL2geoiySbx_xtFZTj(uVar8,uVar10,param_4,local_c0);
    (*local_b0)(uVar10,param_4);
    if ((uVar7 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100656cb0);
      (*pcVar11)();
    }
  }
  uVar7 = param_4;
  __sSz8bitWidthSivgTj(param_4,lVar12);
  puVar4 = local_98;
  if (0x3f < (long)uVar7) {
    local_88 = 0xffffffffffffffff;
    uVar8 = param_4;
    __sSz8isSignedSbvgZTj(param_4,lVar12);
    uVar7 = param_4;
    __sSz8bitWidthSivgTj(param_4,lVar12);
    if ((uVar8 & 1) == 0) {
      if (0x40 < (long)uVar7) goto LAB_100656b84;
LAB_100656be0:
      __sSz8_lowWordSuvgTj(param_4,lVar12);
      uVar8 = local_a8;
    }
    else if ((long)uVar7 < 0x41) {
      __ss35_ExpressibleByBuiltinIntegerLiteralP08_builtindE0xBI_tcfCTj
                (lVar14,&DAT_10084d4f0,0x100,lVar5,local_b8);
      __ss27ExpressibleByIntegerLiteralP07integerD0x0cD4TypeQz_tcfCTj(uVar10,lVar14,param_4,uVar13);
      uVar7 = local_a8;
      __sSL1goiySbx_xtFZTj(local_a8,uVar10,param_4,local_c0);
      (*local_b0)(uVar10,param_4);
      uVar8 = local_a8;
      if ((uVar7 & 1) != 0) goto LAB_100656be0;
    }
    else {
LAB_100656b84:
      FUN_100659f38();
      __sSz18truncatingIfNeededxqd___tcSzRd__lufCTj
                (uVar10,&local_88,PTR___sSuN_100995a50,uVar7,param_4,lVar12);
      uVar8 = local_a8;
      uVar7 = uVar10;
      __sSL1loiySbx_xtFZTj(uVar10,local_a8,param_4,local_c0);
      (*local_b0)(uVar10,param_4);
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100656be0);
        (*pcVar11)();
      }
    }
  }
  uVar10 = param_4;
  __sSz8_lowWordSuvgTj(param_4,lVar12);
  (*local_b0)(uVar8,param_4);
  uVar1 = (undefined1)puVar4[4];
  uVar8 = *puVar4;
  uVar7 = puVar4[1];
  uVar9 = (ulong)(byte)puVar4[2];
  FUN_100658624();
  local_78 = (undefined1)uVar7;
  uStack_80 = uVar8;
  local_70 = uVar9;
  local_88 = uVar10;
  local_68 = uVar1;
  if ((uVar7 & 0xff) == 0) {
    if (uVar10 != 0 || uVar8 != 0) {
      local_78 = 0;
      goto LAB_100656c7c;
    }
  }
  else {
    if (((uint)uVar7 & 0xff) == 1) goto LAB_100656c7c;
    if (*(long *)(uVar9 + 0x10) != 0) {
      local_78 = 2;
      goto LAB_100656c7c;
    }
  }
  local_68 = 0;
LAB_100656c7c:
  *local_a0 = local_88;
  local_a0[1] = uStack_80;
  *(undefined1 *)(local_a0 + 2) = local_78;
  local_a0[3] = local_70;
  *(undefined1 *)(local_a0 + 4) = local_68;
  return;
}

