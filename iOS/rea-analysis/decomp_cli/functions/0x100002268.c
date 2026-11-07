// rea decompile_all
// name: FUN_100002268
// address: 0x100002268
// body: available
// range: 0x100002268-0x10000236f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100002268(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long extraout_x8;
  undefined8 uVar2;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_c8 = param_2[3];
  local_d0 = param_2[2];
  uVar2 = param_2[4];
  lVar1 = 0;
  __sSqMa();
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_3 + -8) + 0x38))((long)&local_d0 - extraout_x8,1,1,param_3);
  uStack_70 = uStack_b8;
  local_78 = uStack_c0;
  uStack_60 = uStack_c8;
  local_68 = local_d0;
  uStack_88 = param_2[2];
  uStack_90 = param_2[1];
  uStack_98 = param_2[4];
  local_a0 = param_2[3];
  local_58 = uVar2;
  FUN_10000eb58(&uStack_90,auStack_b0);
  FUN_1000133cc(&local_a0,auStack_b0,&DAT_100101a88,&BYTE_1000cb6c8);
  FUN_1000020d8(param_1,0,(long)&local_d0 - extraout_x8,&local_78,param_3,param_4,param_5);
  return;
}

