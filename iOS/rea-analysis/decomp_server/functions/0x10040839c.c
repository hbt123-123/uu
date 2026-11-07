// rea decompile_all
// name: FUN_10040839c
// address: 0x10040839c
// body: available
// range: 0x10040839c-0x1004086fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10040839c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long lVar5;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_b0;
  undefined4 auStack_a8 [2];
  long local_a0;
  long local_98;
  long local_90;
  ulong local_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  lVar9 = *(long *)(lVar3 + -8);
  local_90 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar14 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(param_1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar4 + 0x40));
  lVar11 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = lVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_98 = lVar13 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = (lVar13 - extraout_x12_00) - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar5 = lVar10 - extraout_x12_02;
  local_70._0_4_ = 0x80000000;
  lVar12 = *(long *)(param_2 + 0x10);
  local_a0 = lVar5;
  FUN_1004095bc();
  __sSFyxqd__cSzRd__lufCTj(lVar10,&local_70,PTR___ss5Int32VN_100995c78,lVar3,param_1,lVar12);
  lVar2 = local_90;
  (**(code **)(lVar9 + 0x68))
            (lVar14,*(undefined4 *)
                     PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_100995bc0,local_90);
  __sSF7roundedyxs25FloatingPointRoundingRuleOFTj(lVar13,lVar14,param_1,lVar12);
  (**(code **)(lVar9 + 8))(lVar14,lVar2);
  lVar2 = local_a0;
  puVar1 = PTR___ss5Int32VN_100995c78;
  local_70 = CONCAT44(local_70._4_4_,0x7fffffff);
  __sSFyxqd__cSzRd__lufCTj(lVar11,&local_70,PTR___ss5Int32VN_100995c78,lVar3,param_1,lVar12);
  lVar3 = local_98;
  uVar6 = *(undefined8 *)(*(long *)(lVar12 + 0x18) + 8);
  __ss3minyxx_xtSLRzlF(local_98,lVar13,lVar11,param_1,uVar6);
  pcVar8 = *(code **)(lVar4 + 8);
  (*pcVar8)(lVar11,param_1);
  (*pcVar8)(lVar13,param_1);
  __ss3maxyxx_xtSLRzlF(lVar2,lVar10,lVar3,param_1,uVar6);
  (*pcVar8)(lVar3,param_1);
  (*pcVar8)(lVar10,param_1);
  FUN_1004095fc();
  __ss17FixedWidthIntegerPsE8_convert4fromxSg5value_Sb5exacttqd___tSBRd__lFZ
            (&local_70,lVar2,puVar1,param_1,lVar10,param_2);
  if ((local_70 & 0x100000000) == 0) {
    uVar7 = local_70 & 0xffffffff;
    (*pcVar8)(lVar2,param_1);
    return uVar7;
  }
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x50);
  uVar6 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF(param_1,0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar6);
  __sSS6appendyySSF(0xd00000000000001e,0x80000001008b63a0);
  __sSS6appendyySSF(0x3233746e49,0xe500000000000000);
  __sSS6appendyySSF(0xd00000000000002e,0x80000001008b63c0);
  uVar6 = uStack_68;
  uVar7 = local_70;
  *(undefined4 *)(lVar5 + -8) = 0;
  *(undefined8 *)(lVar5 + -0x10) = 0x3836;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,uVar7,uVar6,"Swift/arm64e-apple-macos.swiftinterface",0x27,2);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1004086fc);
  (*pcVar8)();
}

