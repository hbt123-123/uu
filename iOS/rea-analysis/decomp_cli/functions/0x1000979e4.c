// rea decompile_all
// name: FUN_1000979e4
// address: 0x1000979e4
// body: available
// range: 0x1000979e4-0x100097a83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000979e4(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar1 = param_3 >> 6 & 3;
  if (uVar1 == 0) {
    local_40 = 0x2d2d;
    uStack_38 = 0xe200000000000000;
  }
  else {
    if (uVar1 == 1) {
      local_40 = 0;
      uStack_38 = 0xe000000000000000;
      __sSS6appendyySSF(0x2d,0xe100000000000000);
      __sSJ5write2toyxz_ts16TextOutputStreamRzlF
                (&local_40,param_1,param_2,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
      goto LAB_100097a6c;
    }
    local_40 = 0x2d;
    uStack_38 = 0xe100000000000000;
  }
  __sSS6appendyySSF();
LAB_100097a6c:
  auVar2._8_8_ = uStack_38;
  auVar2._0_8_ = local_40;
  return auVar2;
}

