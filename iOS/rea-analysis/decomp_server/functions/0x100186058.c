// rea decompile_all
// name: FUN_100186058
// address: 0x100186058
// body: available
// range: 0x100186058-0x1001861b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100186058(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 auStack_190 [16];
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined1 auStack_170 [16];
  undefined8 local_140;
  undefined8 uStack_138;
  long local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_d7;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_5f;
  
  puVar1 = &DAT_100a7bbc8;
  FUN_100004bb4(&DAT_100a7bbc8,&DAT_100810080);
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF(&local_c8,param_5,auStack_170,puVar1);
  if (local_b8 == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_180 = param_1;
    uStack_17c = param_2;
    FUN_1003fb45c(param_6,auStack_190,0xd0000000000000b6,0x8000000100897ca0,0xd000000000000039,
                  0x8000000100897e80,0xe5,0);
  }
  else {
    uStack_138 = uStack_c0;
    local_140 = local_c8;
    uStack_100 = uStack_88;
    local_108 = local_90;
    uStack_f0 = uStack_78;
    local_f8 = uStack_80;
    local_e8 = local_70;
    uStack_d7 = uStack_5f;
    uStack_120 = uStack_a8;
    local_128 = local_b0;
    local_130 = local_b8;
    uStack_110 = uStack_98;
    local_118 = uStack_a0;
    FUN_10018555c(&local_140);
    FUN_100187560(&local_c8);
  }
  return;
}

