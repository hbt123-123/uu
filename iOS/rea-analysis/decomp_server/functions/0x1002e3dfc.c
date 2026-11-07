// rea decompile_all
// name: FUN_1002e3dfc
// address: 0x1002e3dfc
// body: available
// range: 0x1002e3dfc-0x1002e3f47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 *
FUN_1002e3dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long *unaff_x20;
  code *pcVar6;
  undefined *local_110 [3];
  undefined *local_f8;
  undefined **ppuStack_f0;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_90;
  undefined **ppuStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  ppuVar5 = local_110;
  FUN_1000b142c(param_1,auStack_e8);
  uVar1 = param_3;
  _swift_bridgeObjectRetain();
  FUN_1002c3840();
  uVar2 = 0;
  FUN_1002c3ae0();
  ppuStack_88 = &PTR_PTR_1009ad490;
  local_b0 = 1;
  local_70 = param_9;
  puVar3 = &DAT_100a84380;
  local_c0 = param_2;
  uStack_b8 = param_3;
  local_a8 = uVar1;
  local_90 = uVar2;
  local_80 = param_4;
  uStack_78 = param_8;
  FUN_100004bb4(&DAT_100a84380,&DAT_100818cf0);
  ppuStack_f0 = &PTR_PTR_1009aebd8;
  puVar4 = &DAT_1009ae660;
  local_f8 = puVar3;
  _swift_allocObject(&DAT_1009ae660,0x90,7);
  local_110[0] = puVar4;
  FUN_10007f314(auStack_e8,puVar4 + 0x10,&DAT_100a84380,&DAT_100818cf0);
  pcVar6 = *(code **)(*unaff_x20 + 0x100);
  _swift_bridgeObjectRetain(param_4);
  FUN_10004090c(param_8,param_9);
  (*pcVar6)(local_110,param_5,param_6,param_7);
  FUN_100040bb4(auStack_e8,&DAT_100a84380,&DAT_100818cf0);
  FUN_10003f094(local_110);
  return (undefined1 *)ppuVar5;
}

