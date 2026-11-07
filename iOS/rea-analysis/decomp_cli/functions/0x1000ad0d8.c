// rea decompile_all
// name: FUN_1000ad0d8
// address: 0x1000ad0d8
// body: available
// range: 0x1000ad0d8-0x1000ad28b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000ad0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *unaff_x20;
  ulong uVar7;
  undefined1 auVar8 [16];
  ulong local_60;
  ulong uStack_58;
  long local_50;
  undefined8 uStack_48;
  
  lVar3 = *unaff_x20;
  if (lVar3 == 0) {
    local_50 = 0x3c;
    uStack_48 = 0xe100000000000000;
    uVar7 = unaff_x20[0xd];
    uVar6 = unaff_x20[0xe];
    uVar1 = uVar7 & 0xffffffffffff;
    if ((uVar6 & 0x2000000000000000) != 0) {
      uVar1 = uVar6 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) goto LAB_1000ad1b0;
LAB_1000ad1f4:
    FUN_100084a5c(&local_60);
    uVar6 = uStack_58;
  }
  else {
    if (lVar3 == 1) {
      lVar4 = 0;
      uVar5 = 0xe000000000000000;
      goto LAB_1000ad228;
    }
    FUN_100084b24();
    if (0xfd < ((uint)param_3 & 0xff)) {
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                ("Fatal error",0xb,2,0xd00000000000002f,0x80000001000caad0,
                 "ArgumentParser/UsageGenerator.swift",0x23,2,0x65,0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ad28c);
      (*pcVar2)();
    }
    if ((*(byte *)(unaff_x20 + 0x17) & 1) == 0) {
      lVar4 = lVar3;
      uVar5 = param_2;
      FUN_1000979e4();
      FUN_10008f6ec(lVar3,param_2,param_3);
      goto LAB_1000ad228;
    }
    lVar4 = lVar3;
    uVar5 = param_2;
    FUN_1000979e4();
    FUN_10008f6ec(lVar3,param_2,param_3);
    local_50 = lVar4;
    uStack_48 = uVar5;
    __sSS6appendyySSF(0x3c20,0xe200000000000000);
    uVar7 = unaff_x20[0xd];
    uVar6 = unaff_x20[0xe];
    uVar1 = uVar7 & 0xffffffffffff;
    if ((uVar6 & 0x2000000000000000) != 0) {
      uVar1 = uVar6 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) goto LAB_1000ad1f4;
LAB_1000ad1b0:
    _swift_bridgeObjectRetain(uVar6);
    local_60 = uVar7;
  }
  __sSS6appendyySSF(local_60,uVar6);
  _swift_bridgeObjectRelease(uVar6);
  __sSS6appendyySSF(0x3e,0xe100000000000000);
  lVar4 = local_50;
  uVar5 = uStack_48;
LAB_1000ad228:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = lVar4;
  return auVar8;
}

