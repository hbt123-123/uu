// rea decompile_all
// name: FUN_10009dfe8
// address: 0x10009dfe8
// body: available
// range: 0x10009dfe8-0x10009e177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10009dfe8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  undefined8 *unaff_x20;
  undefined1 auVar7 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar3 = *unaff_x20;
  uVar4 = unaff_x20[1];
  lVar5 = unaff_x20[2];
  uVar6 = (uint)((ulong)lVar5 >> 0x3d) & 3;
  if (uVar6 == 0) {
    if (lVar5 < 0) {
      uVar1 = unaff_x20[3];
      uVar2 = unaff_x20[4];
      FUN_1000979e4();
      local_50 = 0x2065756c6176203b;
      uStack_48 = 0xe900000000000027;
      __sSS6appendyySSF(uVar1,uVar2);
      __sSS6appendyySSF(0x27,0xe100000000000000);
      uVar2 = uStack_48;
      uVar1 = local_50;
      local_50 = uVar3;
      uStack_48 = uVar4;
      _swift_bridgeObjectRetain(uVar4);
      __sSS6appendyySSF(uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar2);
      goto LAB_10009e160;
    }
    uVar6 = (uint)lVar5 >> 6 & 3;
    if (uVar6 == 0) {
      local_50 = 0x2d2d;
      uStack_48 = 0xe200000000000000;
    }
    else {
      if (uVar6 == 1) {
        local_50 = 0;
        uStack_48 = 0xe000000000000000;
        __sSS6appendyySSF(0x2d,0xe100000000000000);
        __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                  (&local_50,uVar3,uVar4,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                   PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
        goto LAB_10009e160;
      }
      local_50 = 0x2d;
      uStack_48 = 0xe100000000000000;
    }
  }
  else {
    if (uVar6 != 1) {
      uStack_48 = 0xea0000000000726f;
      local_50 = 0x74616e696d726574;
      goto LAB_10009e160;
    }
    local_50 = 0x272065756c6176;
    uStack_48 = 0xe700000000000000;
    __sSS6appendyySSF();
    uVar3 = 0x27;
    uVar4 = 0xe100000000000000;
  }
  __sSS6appendyySSF(uVar3,uVar4);
LAB_10009e160:
  auVar7._8_8_ = uStack_48;
  auVar7._0_8_ = local_50;
  return auVar7;
}

