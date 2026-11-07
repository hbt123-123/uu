// rea decompile_all
// name: FUN_100408a4c
// address: 0x100408a4c
// body: available
// range: 0x100408a4c-0x100408da3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100408a4c(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
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
  undefined8 local_70;
  undefined8 local_68;
  
  lVar4 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  lVar9 = *(long *)(lVar4 + -8);
  local_90 = lVar4;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar14 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(param_1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar5 + 0x40));
  lVar12 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = lVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_98 = lVar13 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = (lVar13 - extraout_x12_00) - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar6 = lVar10 - extraout_x12_02;
  local_70 = 0;
  lVar11 = *(long *)(param_2 + 0x10);
  local_a0 = lVar6;
  FUN_10040963c();
  __sSFyxqd__cSzRd__lufCTj(lVar10,&local_70,PTR___sSuN_100995a50,lVar4,param_1,lVar11);
  lVar2 = local_90;
  (**(code **)(lVar9 + 0x68))
            (lVar14,*(undefined4 *)
                     PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_100995bc0,local_90);
  __sSF7roundedyxs25FloatingPointRoundingRuleOFTj(lVar13,lVar14,param_1,lVar11);
  (**(code **)(lVar9 + 8))(lVar14,lVar2);
  lVar2 = local_a0;
  puVar1 = PTR___sSuN_100995a50;
  local_70 = 0xffffffffffffffff;
  __sSFyxqd__cSzRd__lufCTj(lVar12,&local_70,PTR___sSuN_100995a50,lVar4,param_1,lVar11);
  lVar4 = local_98;
  uVar7 = *(undefined8 *)(*(long *)(lVar11 + 0x18) + 8);
  __ss3minyxx_xtSLRzlF(local_98,lVar13,lVar12,param_1,uVar7);
  pcVar8 = *(code **)(lVar5 + 8);
  (*pcVar8)(lVar12,param_1);
  (*pcVar8)(lVar13,param_1);
  __ss3maxyxx_xtSLRzlF(lVar2,lVar10,lVar4,param_1,uVar7);
  (*pcVar8)(lVar4,param_1);
  (*pcVar8)(lVar10,param_1);
  FUN_1004096fc();
  __ss17FixedWidthIntegerPsE8_convert4fromxSg5value_Sb5exacttqd___tSBRd__lFZ
            (&local_70,lVar2,puVar1,param_1,lVar10,param_2);
  uVar7 = local_70;
  if (((byte)local_68 & 1) == 0) {
    (*pcVar8)(lVar2,param_1);
    return uVar7;
  }
  local_70 = 0;
  local_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x50);
  uVar7 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF(param_1,0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar7);
  __sSS6appendyySSF(0xd00000000000001e,0x80000001008b63a0);
  __sSS6appendyySSF(0x746e4955,0xe400000000000000);
  __sSS6appendyySSF(0xd00000000000002e,0x80000001008b63c0);
  uVar3 = local_68;
  uVar7 = local_70;
  *(undefined4 *)(lVar6 + -8) = 0;
  *(undefined8 *)(lVar6 + -0x10) = 0x3836;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,uVar7,uVar3,"Swift/arm64e-apple-macos.swiftinterface",0x27,2);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x100408da4);
  (*pcVar8)();
}

