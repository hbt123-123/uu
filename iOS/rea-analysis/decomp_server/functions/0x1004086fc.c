// rea decompile_all
// name: FUN_1004086fc
// address: 0x1004086fc
// body: available
// range: 0x1004086fc-0x100408a4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1004086fc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x8_00;
  long lVar7;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 uVar8;
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
  undefined8 local_70;
  undefined8 local_68;
  
  lVar3 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  lVar9 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar5 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(param_1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  lVar13 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar14 = lVar13 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = lVar14 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = lVar11 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar7 = lVar12 - extraout_x12_02;
  local_70 = 0;
  lVar15 = *(long *)(param_2 + 0x10);
  local_90 = lVar7;
  FUN_10040963c();
  __sSFyxqd__cSzRd__lufCTj(lVar12,&local_70,PTR___sSuN_100995a50,lVar4,param_1,lVar15);
  (**(code **)(lVar9 + 0x68))
            (lVar5,*(undefined4 *)PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_100995bc0
             ,lVar3);
  __sSF7roundedyxs25FloatingPointRoundingRuleOFTj(lVar14,lVar5,param_1,lVar15);
  (**(code **)(lVar9 + 8))(lVar5,lVar3);
  local_70 = 0x7fffffffffffffff;
  FUN_10040967c();
  puVar1 = PTR___ss5Int64VN_100995cc0;
  __sSFyxqd__cSzRd__lufCTj(lVar13,&local_70,PTR___ss5Int64VN_100995cc0,lVar5,param_1,lVar15);
  uVar8 = *(undefined8 *)(*(long *)(lVar15 + 0x18) + 8);
  __ss3minyxx_xtSLRzlF(lVar11,lVar14,lVar13,param_1,uVar8);
  pcVar10 = *(code **)(lVar6 + 8);
  (*pcVar10)(lVar13,param_1);
  (*pcVar10)(lVar14,param_1);
  lVar4 = local_90;
  __ss3maxyxx_xtSLRzlF(local_90,lVar12,lVar11,param_1,uVar8);
  (*pcVar10)(lVar11,param_1);
  (*pcVar10)(lVar12,param_1);
  FUN_1004096bc();
  __ss17FixedWidthIntegerPsE8_convert4fromxSg5value_Sb5exacttqd___tSBRd__lFZ
            (&local_70,lVar4,puVar1,param_1,lVar12,param_2);
  uVar8 = local_70;
  if (((byte)local_68 & 1) == 0) {
    (*pcVar10)(lVar4,param_1);
    return uVar8;
  }
  local_70 = 0;
  local_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x50);
  uVar8 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF(param_1,0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar8);
  __sSS6appendyySSF(0xd00000000000001e,0x80000001008b63a0);
  __sSS6appendyySSF(0x3436746e49,0xe500000000000000);
  __sSS6appendyySSF(0xd00000000000002e,0x80000001008b63c0);
  uVar2 = local_68;
  uVar8 = local_70;
  *(undefined4 *)(lVar7 + -8) = 0;
  *(undefined8 *)(lVar7 + -0x10) = 0x3836;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,uVar8,uVar2,"Swift/arm64e-apple-macos.swiftinterface",0x27,2);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x100408a4c);
  (*pcVar10)();
}

