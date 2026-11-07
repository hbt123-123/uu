// rea decompile_all
// name: FUN_10009d7b0
// address: 0x10009d7b0
// body: available
// range: 0x10009d7b0-0x10009d887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10009d7b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar5 = *unaff_x20;
  uVar6 = unaff_x20[1];
  if ((long)unaff_x20[2] < 0) {
    uVar1 = unaff_x20[3];
    uVar2 = unaff_x20[4];
    FUN_1000979e4();
    local_40 = uVar5;
    uStack_38 = uVar6;
    __sSS6appendyySSF(0x3d,0xe100000000000000);
    uVar5 = uVar1;
    uVar6 = uVar2;
  }
  else {
    uVar3 = (uint)unaff_x20[2] >> 6 & 3;
    if (uVar3 == 0) {
      local_40 = 0x2d2d;
      uStack_38 = 0xe200000000000000;
    }
    else {
      if (uVar3 == 1) {
        local_40 = 0;
        uStack_38 = 0xe000000000000000;
        __sSS6appendyySSF(0x2d,0xe100000000000000);
        __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                  (&local_40,uVar5,uVar6,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                   PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
        goto LAB_10009d870;
      }
      local_40 = 0x2d;
      uStack_38 = 0xe100000000000000;
    }
  }
  __sSS6appendyySSF(uVar5,uVar6);
LAB_10009d870:
  auVar4._8_8_ = uStack_38;
  auVar4._0_8_ = local_40;
  return auVar4;
}

