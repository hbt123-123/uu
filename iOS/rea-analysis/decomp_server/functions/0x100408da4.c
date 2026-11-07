// rea decompile_all
// name: FUN_100408da4
// address: 0x100408da4
// body: available
// range: 0x100408da4-0x1004090f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100408da4(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long lVar6;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_a0;
  undefined4 auStack_98 [2];
  long local_90;
  ulong local_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  lVar9 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar4 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(param_1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar5 + 0x40));
  lVar13 = lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = lVar13 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = lVar14 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = lVar11 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar6 = lVar12 - extraout_x12_02;
  local_70 = 0;
  lVar15 = *(long *)(param_2 + 0x10);
  local_90 = lVar6;
  FUN_10040963c();
  __sSFyxqd__cSzRd__lufCTj(lVar12,&local_70,PTR___sSuN_100995a50,lVar3,param_1,lVar15);
  (**(code **)(lVar9 + 0x68))
            (lVar4,*(undefined4 *)PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_100995bc0
             ,lVar2);
  __sSF7roundedyxs25FloatingPointRoundingRuleOFTj(lVar14,lVar4,param_1,lVar15);
  (**(code **)(lVar9 + 8))(lVar4,lVar2);
  local_70 = CONCAT44(local_70._4_4_,0xffffffff);
  FUN_10040973c();
  puVar1 = PTR___ss6UInt32VN_100995dc0;
  __sSFyxqd__cSzRd__lufCTj(lVar13,&local_70,PTR___ss6UInt32VN_100995dc0,lVar4,param_1,lVar15);
  uVar7 = *(undefined8 *)(*(long *)(lVar15 + 0x18) + 8);
  __ss3minyxx_xtSLRzlF(lVar11,lVar14,lVar13,param_1,uVar7);
  pcVar10 = *(code **)(lVar5 + 8);
  (*pcVar10)(lVar13,param_1);
  (*pcVar10)(lVar14,param_1);
  lVar3 = local_90;
  __ss3maxyxx_xtSLRzlF(local_90,lVar12,lVar11,param_1,uVar7);
  (*pcVar10)(lVar11,param_1);
  (*pcVar10)(lVar12,param_1);
  FUN_10040977c();
  __ss17FixedWidthIntegerPsE8_convert4fromxSg5value_Sb5exacttqd___tSBRd__lFZ
            (&local_70,lVar3,puVar1,param_1,lVar12,param_2);
  if ((local_70 & 0x100000000) == 0) {
    uVar8 = local_70 & 0xffffffff;
    (*pcVar10)(lVar3,param_1);
    return uVar8;
  }
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x50);
  uVar7 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF(param_1,0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar7);
  __sSS6appendyySSF(0xd00000000000001e,0x80000001008b63a0);
  __sSS6appendyySSF(0x3233746e4955,0xe600000000000000);
  __sSS6appendyySSF(0xd00000000000002e,0x80000001008b63c0);
  uVar7 = uStack_68;
  uVar8 = local_70;
  *(undefined4 *)(lVar6 + -8) = 0;
  *(undefined8 *)(lVar6 + -0x10) = 0x3836;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,uVar8,uVar7,"Swift/arm64e-apple-macos.swiftinterface",0x27,2);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1004090f4);
  (*pcVar10)();
}

