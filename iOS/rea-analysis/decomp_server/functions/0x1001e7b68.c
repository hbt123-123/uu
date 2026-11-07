// rea decompile_all
// name: FUN_1001e7b68
// address: 0x1001e7b68
// body: available
// range: 0x1001e7b68-0x1001e7cbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1001e7b68(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  code *local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  
  lVar1 = 0;
  local_d8 = param_4;
  local_d0 = param_3;
  local_c8 = param_6;
  __s10Foundation4DateVMa();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar2 + 0x40));
  puVar3 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateVACycfC(puVar3);
  FUN_100401b14(0);
  local_80 = param_1;
  uStack_78 = param_2;
  FUN_1003fb48c(param_5,auStack_90,0xd000000000000094,0x8000000100880950,0xd00000000000002a,
                0x8000000100880ed0,0x226,0);
  (*local_d0)(local_70);
  local_b0 = param_1;
  uStack_a8 = param_2;
  local_a0 = puVar3;
  FUN_1003fb48c(local_c8,auStack_c0,0xd000000000000094,0x8000000100880950,0xd00000000000002a,
                0x8000000100880ed0,0x228,0);
  (**(code **)(lVar2 + 8))(puVar3,lVar1);
  return local_70;
}

