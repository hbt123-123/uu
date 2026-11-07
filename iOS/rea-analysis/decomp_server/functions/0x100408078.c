// rea decompile_all
// name: FUN_100408078
// address: 0x100408078
// body: available
// range: 0x100408078-0x10040839b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100408078(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 uVar4;
  undefined1 *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_b0;
  undefined4 auStack_a8 [2];
  undefined1 auStack_a0 [8];
  long local_98;
  long local_90;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar2 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  lVar7 = *(long *)(lVar2 + -8);
  local_90 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(param_1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar3 + 0x40));
  lVar9 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = lVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_98 = lVar12 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar8 = (lVar12 - extraout_x12_00) - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = lVar8 - extraout_x12_02;
  lVar10 = *(long *)(param_2 + 0x10);
  __sSFyxSicfCTj(lVar8,0x8000000000000000,param_1,lVar10);
  lVar2 = local_90;
  (**(code **)(lVar7 + 0x68))
            (puVar5,*(undefined4 *)
                     PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_100995bc0,local_90);
  __sSF7roundedyxs25FloatingPointRoundingRuleOFTj(lVar12,puVar5,param_1,lVar10);
  (**(code **)(lVar7 + 8))(puVar5,lVar2);
  __sSFyxSicfCTj(lVar9,0x7fffffffffffffff,param_1,lVar10);
  lVar2 = local_98;
  uVar4 = *(undefined8 *)(*(long *)(lVar10 + 0x18) + 8);
  __ss3minyxx_xtSLRzlF(local_98,lVar12,lVar9,param_1,uVar4);
  pcVar6 = *(code **)(lVar3 + 8);
  (*pcVar6)(lVar9,param_1);
  (*pcVar6)(lVar12,param_1);
  __ss3maxyxx_xtSLRzlF(lVar11,lVar8,lVar2,param_1,uVar4);
  (*pcVar6)(lVar2,param_1);
  (*pcVar6)(lVar8,param_1);
  FUN_10040957c();
  __ss17FixedWidthIntegerPsE8_convert4fromxSg5value_Sb5exacttqd___tSBRd__lFZ
            (&local_70,lVar11,PTR___sSiN_100995968,param_1,lVar8,param_2);
  if (((byte)local_68 & 1) == 0) {
    (*pcVar6)(lVar11,param_1);
    return local_70;
  }
  local_70 = 0;
  local_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x50);
  uVar4 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF(param_1,0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __sSS6appendyySSF(0xd00000000000001e,0x80000001008b63a0);
  __sSS6appendyySSF(0x746e49,0xe300000000000000);
  __sSS6appendyySSF(0xd00000000000002e,0x80000001008b63c0);
  uVar1 = local_68;
  uVar4 = local_70;
  *(undefined4 *)(lVar11 + -8) = 0;
  *(undefined8 *)(lVar11 + -0x10) = 0x3836;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,uVar4,uVar1,"Swift/arm64e-apple-macos.swiftinterface",0x27,2);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10040839c);
  (*pcVar6)();
}

