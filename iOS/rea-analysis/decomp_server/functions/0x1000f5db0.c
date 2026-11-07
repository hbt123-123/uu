// rea decompile_all
// name: FUN_1000f5db0
// address: 0x1000f5db0
// body: available
// range: 0x1000f5db0-0x1000f5ffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1000f5db0(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_100 [16];
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  if (((param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000) &&
     ((param_2 & 0x7fffffffffffffff) < 0x7ff0000000000000)) {
    FUN_1000f5988(&local_c8,param_1,param_2);
    if (local_a8 != 0) {
      uStack_88 = uStack_c0;
      local_90 = local_c8;
      uStack_78 = uStack_b0;
      uStack_80 = local_b8;
      local_70 = local_a8;
      uStack_60 = uStack_98;
      local_68 = local_a0;
      FUN_1000f4ef4(param_1,param_2);
      FUN_1000f600c(&local_c8);
      if ((param_5 & 1) == 0) {
        uVar1 = 0;
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)(uVar1);
        local_f0 = param_1;
        uStack_e8 = param_2;
        local_e0 = param_3;
        uStack_d8 = param_4;
        FUN_1003fb45c(FUN_1000f6054,auStack_100,0xd00000000000009c,0x8000000100889530,
                      0xd000000000000023,0x80000001008895d0,0x76,5);
        param_2 = param_4;
        param_1 = param_3;
      }
      goto LAB_1000f5fd8;
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    pcVar2 = FUN_1000f6004;
    uVar1 = 0x6f;
  }
  else {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    pcVar2 = FUN_1000f5ffc;
    uVar1 = 0x6a;
  }
  local_e0 = param_1;
  uStack_d8 = param_2;
  FUN_1003fb4ec(pcVar2,&local_f0,0xd00000000000009c,0x8000000100889530,0xd000000000000023,
                0x80000001008895d0,uVar1,5);
LAB_1000f5fd8:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}

