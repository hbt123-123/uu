// rea decompile_all
// name: FUN_1005386f8
// address: 0x1005386f8
// body: available
// range: 0x1005386f8-0x10053885f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005386f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,long param_6,long param_7,long param_8,long param_9)

{
  long lVar1;
  code *pcVar2;
  long unaff_x21;
  undefined1 *puVar3;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined4 local_bc;
  undefined1 auStack_b0 [16];
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 *puStack_68;
  
  lVar1 = *(long *)(param_6 + -8);
  puVar3 = auStack_d0 + -(*(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_c8 = param_1;
  local_bc = param_5;
  (**(code **)(param_8 + 0x10))(puVar3,param_6,param_8);
  local_78 = (undefined1)local_bc;
  local_a0 = param_6;
  lStack_98 = param_7;
  local_90 = param_8;
  lStack_88 = param_9;
  local_80 = param_4;
  local_70 = param_3;
  puStack_68 = puVar3;
  (**(code **)(param_9 + 0x20))(FUN_1005395dc,auStack_b0,PTR___sytN_100995e90 + 8,param_7,param_9);
  (**(code **)(*(long *)(param_7 + -8) + 8))(param_2,param_7);
  if (unaff_x21 == 0) {
    (**(code **)(lVar1 + 0x10))(local_c8,puVar3,param_6);
    FUN_100040bb4(param_3,&DAT_100aaa0e8,&DAT_1008358c0);
    pcVar2 = *(code **)(lVar1 + 8);
  }
  else {
    FUN_100040bb4(param_3,&DAT_100aaa0e8,&DAT_1008358c0);
    pcVar2 = *(code **)(lVar1 + 8);
  }
  (*pcVar2)(puVar3,param_6);
  return;
}

